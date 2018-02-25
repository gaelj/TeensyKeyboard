// Represents one key on the keyboard.
// Designed to interface to a keyboard as described in http://www.datasheet-pdf.com/PDF/AY11320-Datasheet-GeneralSemiconductor-547503
// Each key is a double pole switch that connects its output to one common
// rail when the key is unpressed, to a second common rail when the key
// is pressed down, and is left open during the transition, therefore
// allowing velocity measurement.
// Each key will be connected to the input of an analog multiplexer, of which
// there must be one per octave.

#include "KeyboardKey.h"

KeyboardKeyClass::KeyboardKeyClass()
{
    // Define the synthesizer modules
    WaveForm1 = new AudioSynthWaveform();
    //Chorus1 = new AudioEffectChorus();
    Envelope1 = new AudioEffectEnvelope();

    PatchCord1 = new AudioConnection(*WaveForm1, *Envelope1);
    //PatchCord2 = new AudioConnection(*Chorus1, *Envelope1);
}

void KeyboardKeyClass::Init(int octave, int note, AudioMixer4* mixer, int mixerInputNumber)
{
    Octave = octave;
    Note = note;

    frequency = GetFrequency(octave, note);
    keyState = Unpressed;
    sustainActive = false;

    StartPressingTimestamp = 0;
    EndPressingTimestamp = 0;

    velocity = 0;

    PatchCordToMixer = new AudioConnection(*Envelope1, 0, *mixer, mixerInputNumber);
    
    // Initialise the synthesizer modules
    WaveForm1->begin(0, frequency, WAVEFORM_TRIANGLE);

    Envelope1->delay(0.0f);
    Envelope1->attack(8.0f);
    Envelope1->hold(0.0f);
    Envelope1->decay(2000.0f);
    Envelope1->sustain(0.0f);
    Envelope1->release(500.0f);

    //Chorus1->voices(5);
    //Chorus1->begin();
}

bool KeyboardKeyClass::IsValid()
{
    return WaveForm1 != 0;
}

// Set keyState and velocity values, and press timestamps
void KeyboardKeyClass::SetInputVoltage(int voltage, long now)
{
    if (!IsValid())
        return;

    KeyboardKeyStates newState = GetKeyStateByVoltage(voltage);
    if (keyState == newState)
        return;

    Serial.print("Note: Octave=");
    Serial.print(Octave);
    Serial.print("\tNote=");
    Serial.print(Note);
    Serial.print("\tFreq=");
    Serial.print(frequency);
    Serial.print("\tState=");
    Serial.print(newState);
    Serial.print("\tVelocity=");
    Serial.print(velocity);
    Serial.print("\tVoltage=");
    Serial.print(voltage);
    Serial.println();

    switch (newState) {
        case Pressing:
            StartPressingTimestamp = now;
            break;
        case Pressed:
            EndPressingTimestamp = now;
            velocity = GetVelocityByTimespan(EndPressingTimestamp - StartPressingTimestamp);
            WaveForm1->amplitude(velocity);
            Envelope1->noteOn();
            break;
        case Unpressed:
            if (!sustainActive) {
                Envelope1->noteOff();
            }
            break;
    }

    keyState = newState;
}

// Get the pressed state of they key according to the sensed voltage
KeyboardKeyStates KeyboardKeyClass::GetKeyStateByVoltage(int voltage)
{
    if (voltage < V_UNPRESSED + V_TOLERANCE)
        return Unpressed;
    if (voltage > V_PRESSED - V_TOLERANCE)
        return Pressed;
    return Pressing;
}

// Get the velocity of the key press according to the time from unpressed to pressed
float KeyboardKeyClass::GetVelocityByTimespan(long timeSpan)
{
    return exp(-(float)timeSpan / (float)VELOCITY_TIME_CONSTANT);
}

// Get the frequency of the note, from its octave (0 to 4) and note number (0 to 11)
// Source: https://en.wikipedia.org/wiki/Piano_key_frequencies
float KeyboardKeyClass::GetFrequency(int octave, int note)
{
    float n = note + (octave * NOTES_PER_OCTAVE);
    return 440.0f * pow(2.0f, (n - (float)A440_KEY_NUMBER) / (float)NOTES_PER_OCTAVE);
}

int KeyboardKeyClass::SimulateKeyMotionVoltage(uint32_t start)
{
    uint32_t delay = millis() - start;
    if (delay < 10) {
        return V_PRESSED / 2;
    }
    else if (delay < 15) {
        return V_PRESSED;
    }
    else if (delay < 100) {
        return V_PRESSED / 2;
    }
    else {
        return V_UNPRESSED;
    }
}

void KeyboardKeyClass::SimulateKeyMotion()
{
    SetInputVoltage(
        SimulateKeyMotionVoltage(KeyPressStartTime),
        millis());
}
