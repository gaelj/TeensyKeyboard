#include <Audio.h>
#include <AudioStream.h>
#include <Wire.h>
#include <SPI.h>
//#include <SerialFlash.h>
#include <TFT_ILI93XX.h>
#include <ClickEncoder.h>
#include <TimerOne.h>

#include "KeyboardKey.h"
#include "SynthParameters.h"
#include "UserMenuItem.h"
#include "UserMenu.h"

KeyboardKeyClass Keys[OCTAVES_CNT][NOTES_PER_OCTAVE];

// GUItool: begin automatically generated code
AudioMixer4              mixer1;         //xy=1304.9259643554688,227.74080657958984
AudioMixer4              mixer2;         //xy=1304.9259643554688,306.74080657958984
AudioMixer4              mixer3;         //xy=1302.9259643554688,381.74080657958984
AudioMixer4              mixer4;         //xy=1301.9259643554688,453.74080657958984
AudioMixer4              mixer2_1;         //xy=1496.9259643554688,365.74080657958984
AudioMixer4              mixer5;         //xy=1316.9259643554688,878.7408065795898
AudioMixer4              mixer6;         //xy=1315.9259643554688,948.7408065795898
AudioMixer4              mixer7;         //xy=1318.9259643554688,1021.7408065795898
AudioMixer4              mixer8;         //xy=1317.9259643554688,1092.7408065795898
AudioMixer4              mixer2_2;        //xy=1511.9259643554688,966.7408065795898
AudioMixer4              mixer9;        //xy=1327.9259643554688,1523.7408065795898
AudioMixer4              mixer10;        //xy=1328.9259643554688,1590.7408065795898
AudioMixer4              mixer11;        //xy=1328.9259643554688,1657.7408065795898
AudioMixer4              mixer12;        //xy=1326.9259643554688,1723.7408065795898
AudioMixer4              mixer2_3;        //xy=1523.9259643554688,1613.7408065795898
AudioMixer4              mixer13;        //xy=1330.9259643554688,2162.74080657959
AudioMixer4              mixer14;        //xy=1328.9259643554688,2232.74080657959
AudioMixer4              mixer15;        //xy=1326.9259643554688,2299.74080657959
AudioMixer4              mixer16;        //xy=1325.9259643554688,2368.74080657959
AudioMixer4              mixer2_4;        //xy=1518.9259643554688,2243.74080657959
AudioMixer4              mixer3_1;        //xy=1778.9259643554688,1363.7408065795898
AudioEffectReverb        reverb1;
AudioOutputI2S           i2s1;           //xy=1952.5927734375,1364.1853332519531

AudioConnection          patchCord125(mixer1, 0, mixer2_1, 0);
AudioConnection          patchCord126(mixer2, 0, mixer2_1, 1);
AudioConnection          patchCord124(mixer3, 0, mixer2_1, 2);
AudioConnection          patchCord123(mixer4, 0, mixer2_1, 3);

AudioConnection          patchCord128(mixer5, 0, mixer2_2, 0);
AudioConnection          patchCord127(mixer6, 0, mixer2_2, 1);
AudioConnection          patchCord130(mixer7, 0, mixer2_2, 2);
AudioConnection          patchCord129(mixer8, 0, mixer2_2, 3);

AudioConnection          patchCord132(mixer9, 0, mixer2_3, 0);
AudioConnection          patchCord133(mixer10, 0, mixer2_3, 1);
AudioConnection          patchCord135(mixer11, 0, mixer2_3, 2);
AudioConnection          patchCord131(mixer12, 0, mixer2_3, 3);

AudioConnection          patchCord138(mixer13, 0, mixer2_4, 0);
AudioConnection          patchCord137(mixer14, 0, mixer2_4, 1);
AudioConnection          patchCord136(mixer15, 0, mixer2_4, 2);
AudioConnection          patchCord134(mixer16, 0, mixer2_4, 3);

AudioConnection          patchCord139(mixer2_1, 0, mixer3_1, 0);
AudioConnection          patchCord142(mixer2_3, 0, mixer3_1, 2);
AudioConnection          patchCord140(mixer2_2, 0, mixer3_1, 1);
AudioConnection          patchCord141(mixer2_4, 0, mixer3_1, 3);

//AudioConnection          patchCord145(mixer3_1, 0, reverb1, 0);

AudioConnection          patchCord143(mixer3_1, 0, i2s1, 0);
AudioConnection          patchCord144(mixer3_1, 0, i2s1, 1);
AudioControlSGTL5000     audioShield;    //xy=2095.148193359375,1364.2963562011719
// GUItool: end automatically generated code

#define MIXER_CNT   21
AudioMixer4* Mixers[MIXER_CNT] = {
    &mixer1,
    &mixer2,
    &mixer3,
    &mixer4,
    &mixer5,
    &mixer6,
    &mixer7,
    &mixer8,
    &mixer9,
    &mixer10,
    &mixer11,
    &mixer12,
    &mixer13,
    &mixer14,
    &mixer15,
    &mixer16,
    &mixer2_1,
    &mixer2_2,
    &mixer2_3,
    &mixer2_4,
    &mixer3_1,
};

// Analog multiplexed inputs, 1 / octave
#define AI_OCT_1        A10 // = DIO 22
#define AI_OCT_2        A11 // = DIO 21
#define AI_OCT_3        A19 // = DIO 38 
#define AI_OCT_4        A20 // = DIO 39
#define AI_OCT_5        A21 // not a DIO
#define AI_OCT_6        A22 // not a DIO

// Multiplexer address outputs
#define ADDR_PIN_CNT    4
#define MUX_ADDR_0      24
#define MUX_ADDR_1      25
#define MUX_ADDR_2      26
#define MUX_ADDR_3      27

int MuxAddressPins[ADDR_PIN_CNT] = { MUX_ADDR_0, MUX_ADDR_1, MUX_ADDR_2, MUX_ADDR_3 };
int analogInPins[OCTAVES_CNT] = { AI_OCT_1, AI_OCT_2, AI_OCT_3, AI_OCT_4, AI_OCT_5, AI_OCT_6 };

// Rotary encoder
#define ROT_PUSH        47
#define ROT_INC         48
#define ROT_DEC         49

// Display
#define TFT_DC      54
#define TFT_CS      43
#define TFT_MOSI    44
#define TFT_MISO    45
#define TFT_SCK     46
#define TFT_RST     51

TFT_ILI93XX tft = TFT_ILI93XX(TFT_CS, TFT_DC, TFT_RST, TFT_MOSI, TFT_SCK);

SynthParametersClass SynthParameters = SynthParametersClass();
UserMenuClass Menu = UserMenuClass(&tft, &SynthParameters);

#define ENCODER_STEPS_PER_NOTCH     4
ClickEncoder* encoder;
int16_t encoderValueLast;
int16_t encoderValue;

void timerIsr() {
    encoder->service();
}

void setup()
{
    encoder = new ClickEncoder(ROT_INC, ROT_DEC, ROT_PUSH, ENCODER_STEPS_PER_NOTCH);
    Timer1.initialize(1000);
    Timer1.attachInterrupt(timerIsr);
    encoderValueLast = -1;

    pinMode(ROT_PUSH, INPUT_PULLUP);
    pinMode(ROT_INC, INPUT_PULLUP);
    pinMode(ROT_DEC, INPUT_PULLUP);

    for (uint ai = 0; ai < OCTAVES_CNT; ai++)
        pinMode(analogInPins[ai], INPUT);

    // Initialise multiplexer addressing
    for (uint bit = 0; bit < ADDR_PIN_CNT; bit++) {
        pinMode(MuxAddressPins[bit], OUTPUT);
        digitalWrite(MuxAddressPins[bit], LOW);
    }

    AudioMemory(61);

    //the following it's mainly for Teensy
    //it will help you to understand if you have chosen the
    //wrong combination of pins!
    while (true) {
        Serial.println("Beginning...");
        tft.begin();
        Serial.println("Begin done !!!");
        uint8_t errorCode = tft.getErrorCode();
        if (errorCode != 0) {
            Serial.print("Init error! ");
            if (bitRead(errorCode, 0)) Serial.print("MOSI or SCLK pin mismatch!\n");
            if (bitRead(errorCode, 1)) Serial.print("CS or DC pin mismatch!\n");
            delay(1000);
        }
        else {
            Serial.print("No init errors");
            break;
        }
    }
    tft.setRotation(1);
    Serial.println();

    Menu.ShowPage(Startup);
    Serial.begin(115200);
    delay(500);

    // Initialise key objects
    for (uint octave = 0; octave < OCTAVES_CNT; octave++) {
        for (uint note = 0; note < NOTES_PER_OCTAVE; note++) {
            int noteNumber = (octave * NOTES_PER_OCTAVE) + note;
            Keys[octave][note].Init(octave, note,
                Mixers[noteNumber / 4],
                noteNumber % 4,
                &SynthParameters);
        }
    }

    // Initialise mixer objects
    for (uint m = 0; m < MIXER_CNT; m++) {
        Mixers[m]->gain(0, m < 16 ? 0.1f : 1);
        Mixers[m]->gain(1, m < 16 ? 0.1f : 1);
        Mixers[m]->gain(2, m < 16 ? 0.1f : 1);
        Mixers[m]->gain(3, m < 16 ? 0.1f : 1);
    }

    // Initialise audioChangeRow
    audioShield.enable();
    audioShield.volume(2.0f);

    reverb1.reverbTime(0.0f);

    Menu.ShowPage(MainConfig);
}

uint currentOctave = 0;
uint currentNote = 0;
uint32_t lastNoteStart;
int currentNoteId = 0;

void loop()
{
    //Serial.print("AudioMemoryUsageMax: ");
    //Serial.println(AudioMemoryUsageMax());

    // Scan the keyboard
    for (uint note = 0; note < NOTES_PER_OCTAVE; note++) {
        // Write the note number binary value over the 4 multiplexer address lines
        // (therefore selecting one note in each octave, or 1 line in each multiplexer)

        for (uint bit = 0; bit < ADDR_PIN_CNT; bit++)
            digitalWrite(MuxAddressPins[bit], 1 & (note >> bit));

        delayMicroseconds(1); // leave the multiplexer some time to switch (~500ns @3.3V)

        for (uint octave = 0; octave < OCTAVES_CNT; octave++) {
            //int voltage = analogRead(analogInPins[octave]);
            //Keys[octave][note].SetInputVoltage(voltage, millis());

            Keys[octave][note].SimulateKeyMotion();
        }
    }

    uint32_t now = millis();

    // press next key
    if ((now - lastNoteStart) > 100) {
        lastNoteStart = now;

        // skip the last octave except for the first key
        if (currentOctave == OCTAVES_CNT - 1 && currentNote == 0) {
            currentNote = NOTES_PER_OCTAVE - 1;
        }

        if (currentNote == 4 || currentNote == 11)
            currentNote = (currentNote + 1) % NOTES_PER_OCTAVE;
        else
            currentNote = (currentNote + 2) % NOTES_PER_OCTAVE;

        if (currentNote == 0)
            currentOctave = (currentOctave + 1) % OCTAVES_CNT;

        Keys[currentOctave][currentNote].KeyPressStartTime = now;
    }
    encoderValue += encoder->getValue();

    if (encoderValue != encoderValueLast) {
        Menu.RotateEncoder(encoderValue - encoderValueLast);
        encoderValueLast = encoderValue;
        //Serial.print("Encoder Value: ");
        //Serial.println(encoderValue);
    }

    ClickEncoder::Button b = encoder->getButton();
    if (b != ClickEncoder::Open) {
        //Serial.print("Button: ");
        switch (b) {
            case ClickEncoder::Pressed: Serial.println(ClickEncoder::Pressed); break;
            case ClickEncoder::Held: Serial.println(ClickEncoder::Held); break;
            case ClickEncoder::Released: Serial.println(ClickEncoder::Released); break;
            case ClickEncoder::Clicked: Serial.println(ClickEncoder::Clicked);
                Menu.PressEncoder(); break;
            case ClickEncoder::DoubleClicked:
                // Serial.println("ClickEncoder::DoubleClicked");
                encoder->setAccelerationEnabled(!encoder->getAccelerationEnabled());
                //Serial.print("  Acceleration is ");
                //Serial.println((encoder->getAccelerationEnabled()) ? "enabled" : "disabled");
                break;
        }
    }
}
