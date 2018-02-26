// SynthParameters.h

#ifndef _SYNTHPARAMETERS_h
#define _SYNTHPARAMETERS_h

#include <arduino.h>

class SynthParametersClass
{
public:
    bool PlayDemo;
    bool SustainActive;

    float EnvelopeDelay;
    float EnvelopeAttack;
    float EnvelopeHold;
    float EnvelopeDecay;
    float EnvelopeSustain;
    float EnvelopeRelease;

    SynthParametersClass();
};

#endif
