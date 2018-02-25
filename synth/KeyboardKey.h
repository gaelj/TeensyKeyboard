// KeyboardKey.h

#ifndef _KEYBOARDKEY_h
#define _KEYBOARDKEY_h

#include "arduino.h"
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>
#include "synth_waveform.h"
#include "effect_envelope.h"

// Keyboard definition
#define OCTAVES_CNT          6
#define NOTES_PER_OCTAVE    12

enum KeyboardKeyStates {
    Unpressed,
    Pressing,
    Pressed,
};

class KeyboardKeyClass
{
protected:
    const long VELOCITY_TIME_CONSTANT = 18; // ms

    const float V_UNPRESSED = 0;
    const float V_PRESSED   = (1 << 10); // 1024
    const float V_TOLERANCE = (1 << 6);  // 64;

    static const int A440_KEY_NUMBER = 33; // key number of A 440Hz, 0-based

    long StartPressingTimestamp;    // key left up position
    long EndPressingTimestamp;      // key reached down position

    KeyboardKeyStates GetKeyStateByVoltage(int voltage);
    float GetVelocityByTimespan(long timeSpan);
    int SimulateKeyMotionVoltage(uint32_t start);

    AudioSynthWaveform*      WaveForm1;
    AudioEffectChorus*       Chorus1;
    AudioEffectEnvelope*     Envelope1;
    AudioEffectReverb*       Reverb1;
    AudioConnection*         PatchCord1;
    AudioConnection*         PatchCord2;
    AudioConnection*         PatchCord3;
    AudioConnection*         PatchCordToMixer;

public:
    KeyboardKeyClass();
    void Init(int octave, int note, AudioMixer4* mixer, int mixerInputNumber);
    bool IsValid();
    void SetInputVoltage(int voltage, long now);
    void SimulateKeyMotion();
    int Octave;
    int Note;
    KeyboardKeyStates keyState;

    float frequency;
    float velocity;
    bool sustainActive;

    static float GetFrequency(int octave, int note);

    uint32_t KeyPressStartTime;
};

#endif
