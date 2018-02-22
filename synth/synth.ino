#include "KeyboardKey.h"
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=871.9259643554688,81.74080657958984
AudioSynthWaveform       waveform2;      //xy=871.9259643554688,120.74080657958984
AudioSynthWaveform       waveform3;      //xy=871.9259643554688,161.74080657958984
AudioSynthWaveform       waveform4;      //xy=871.9259643554688,201.74080657958984
AudioSynthWaveform       waveform5;      //xy=871.9259643554688,241.74080657958984
AudioSynthWaveform       waveform6;      //xy=871.9259643554688,281.74080657958984
AudioSynthWaveform       waveform7;      //xy=871.9259643554688,321.74080657958984
AudioSynthWaveform       waveform8;      //xy=871.9259643554688,361.74080657958984
AudioSynthWaveform       waveform9;      //xy=871.9259643554688,401.74080657958984
AudioSynthWaveform       waveform10;     //xy=871.9259643554688,441.74080657958984
AudioSynthWaveform       waveform11;     //xy=871.9259643554688,481.74080657958984
AudioSynthWaveform       waveform12;     //xy=871.9259643554688,521.7408065795898
AudioSynthWaveform       waveform13;     //xy=871.9259643554688,561.7408065795898
AudioSynthWaveform       waveform14;     //xy=871.9259643554688,601.7408065795898
AudioSynthWaveform       waveform15;     //xy=871.9259643554688,641.7408065795898
AudioSynthWaveform       waveform16;     //xy=871.9259643554688,681.7408065795898
AudioSynthWaveform       waveform17;     //xy=871.9259643554688,721.7408065795898
AudioSynthWaveform       waveform18;     //xy=871.9259643554688,761.7408065795898
AudioSynthWaveform       waveform19;     //xy=871.9259643554688,801.7408065795898
AudioSynthWaveform       waveform21;     //xy=871.9259643554688,881.7408065795898
AudioSynthWaveform       waveform22;     //xy=871.9259643554688,921.7408065795898
AudioSynthWaveform       waveform23;     //xy=871.9259643554688,961.7408065795898
AudioSynthWaveform       waveform24;     //xy=871.9259643554688,1001.7408065795898
AudioSynthWaveform       waveform25;     //xy=871.9259643554688,1041.7408065795898
AudioSynthWaveform       waveform26;     //xy=871.9259643554688,1081.7408065795898
AudioSynthWaveform       waveform27;     //xy=871.9259643554688,1121.7408065795898
AudioSynthWaveform       waveform28;     //xy=871.9259643554688,1161.7408065795898
AudioSynthWaveform       waveform29;     //xy=871.9259643554688,1201.7408065795898
AudioSynthWaveform       waveform30;     //xy=871.9259643554688,1241.7408065795898
AudioSynthWaveform       waveform31;     //xy=871.9259643554688,1281.7408065795898
AudioSynthWaveform       waveform32;     //xy=871.9259643554688,1321.7408065795898
AudioSynthWaveform       waveform20;     //xy=873.9259643554688,841.7408065795898
AudioSynthWaveform       waveform33;     //xy=871.9259643554688,1361.7408065795898
AudioSynthWaveform       waveform34;     //xy=871.9259643554688,1401.7408065795898
AudioSynthWaveform       waveform35;     //xy=871.9259643554688,1441.7408065795898
AudioSynthWaveform       waveform36;     //xy=871.9259643554688,1481.7408065795898
AudioSynthWaveform       waveform37;     //xy=871.9259643554688,1521.7408065795898
AudioSynthWaveform       waveform38;     //xy=871.9259643554688,1561.7408065795898
AudioSynthWaveform       waveform39;     //xy=871.9259643554688,1601.7408065795898
AudioSynthWaveform       waveform40;     //xy=871.9259643554688,1641.7408065795898
AudioSynthWaveform       waveform41;     //xy=871.9259643554688,1681.7408065795898
AudioSynthWaveform       waveform42;     //xy=871.9259643554688,1721.7408065795898
AudioSynthWaveform       waveform43;     //xy=871.9259643554688,1761.7408065795898
AudioSynthWaveform       waveform44;     //xy=871.9259643554688,1801.7408065795898
AudioSynthWaveform       waveform45;     //xy=871.9259643554688,1841.7408065795898
AudioSynthWaveform       waveform46;     //xy=871.9259643554688,1881.7408065795898
AudioSynthWaveform       waveform47;     //xy=871.9259643554688,1921.7408065795898
AudioSynthWaveform       waveform48;     //xy=871.9259643554688,1961.7408065795898
AudioSynthWaveform       waveform49;     //xy=871.9259643554688,2001.7408065795898
AudioSynthWaveform       waveform50;     //xy=871.9259643554688,2041.7408065795898
AudioSynthWaveform       waveform51;     //xy=871.9259643554688,2081.74080657959
AudioSynthWaveform       waveform52;     //xy=871.9259643554688,2121.74080657959
AudioSynthWaveform       waveform53;     //xy=871.9259643554688,2161.74080657959
AudioSynthWaveform       waveform54;     //xy=871.9259643554688,2201.74080657959
AudioSynthWaveform       waveform55;     //xy=871.9259643554688,2241.74080657959
AudioSynthWaveform       waveform56;     //xy=871.9259643554688,2281.74080657959
AudioSynthWaveform       waveform57;     //xy=871.9259643554688,2321.74080657959
AudioSynthWaveform       waveform58;     //xy=871.9259643554688,2361.74080657959
AudioSynthWaveform       waveform59;     //xy=871.9259643554688,2401.74080657959
AudioSynthWaveform       waveform60;     //xy=871.9259643554688,2441.74080657959
AudioSynthWaveform       waveform61;     //xy=872.9259643554688,2484.74080657959
AudioEffectEnvelope      envelope1;      //xy=1034.9259643554688,81.74080657958984
AudioEffectEnvelope      envelope2;      //xy=1036.9259643554688,126.74080657958984
AudioEffectEnvelope      envelope9;      //xy=1038.9259643554688,404.74080657958984
AudioEffectEnvelope      envelope4;      //xy=1039.9259643554688,209.74080657958984
AudioEffectEnvelope      envelope7;      //xy=1039.9259643554688,321.74080657958984
AudioEffectEnvelope      envelope8;      //xy=1039.9259643554688,360.74080657958984
AudioEffectEnvelope      envelope3;      //xy=1040.9259643554688,169.74080657958984
AudioEffectEnvelope      envelope5;      //xy=1041.9259643554688,244.74080657958984
AudioEffectEnvelope      envelope6;      //xy=1041.9259643554688,281.74080657958984
AudioEffectEnvelope      envelope17;     //xy=1040.9259643554688,722.7408065795898
AudioEffectEnvelope      envelope10;     //xy=1043.9259643554688,443.74080657958984
AudioEffectEnvelope      envelope18;     //xy=1042.9259643554688,767.7408065795898
AudioEffectEnvelope      envelope12;     //xy=1043.9259643554688,532.7408065795898
AudioEffectEnvelope      envelope15;     //xy=1043.9259643554688,644.7408065795898
AudioEffectEnvelope      envelope16;     //xy=1043.9259643554688,683.7408065795898
AudioEffectEnvelope      envelope11;     //xy=1044.9259643554688,492.74080657958984
AudioEffectEnvelope      envelope25;     //xy=1043.9259643554688,1046.7408065795898
AudioEffectEnvelope      envelope13;     //xy=1045.9259643554688,567.7408065795898
AudioEffectEnvelope      envelope14;     //xy=1045.9259643554688,604.7408065795898
AudioEffectEnvelope      envelope20;     //xy=1045.9259643554688,850.7408065795898
AudioEffectEnvelope      envelope23;     //xy=1045.9259643554688,962.7408065795898
AudioEffectEnvelope      envelope24;     //xy=1045.9259643554688,1001.7408065795898
AudioEffectEnvelope      envelope19;     //xy=1046.9259643554688,810.7408065795898
AudioEffectEnvelope      envelope26;     //xy=1045.9259643554688,1091.7408065795898
AudioEffectEnvelope      envelope21;     //xy=1047.9259643554688,885.7408065795898
AudioEffectEnvelope      envelope22;     //xy=1047.9259643554688,922.7408065795898
AudioEffectEnvelope      envelope33;     //xy=1047.9259643554688,1369.7408065795898
AudioEffectEnvelope      envelope28;     //xy=1048.9259643554688,1174.7408065795898
AudioEffectEnvelope      envelope31;     //xy=1048.9259643554688,1286.7408065795898
AudioEffectEnvelope      envelope32;     //xy=1048.9259643554688,1325.7408065795898
AudioEffectEnvelope      envelope27;     //xy=1049.9259643554688,1134.7408065795898
AudioEffectEnvelope      envelope34;     //xy=1049.9259643554688,1414.7408065795898
AudioEffectEnvelope      envelope29;     //xy=1050.9259643554688,1209.7408065795898
AudioEffectEnvelope      envelope30;     //xy=1050.9259643554688,1246.7408065795898
AudioEffectEnvelope      envelope41;     //xy=1049.9259643554688,1687.7408065795898
AudioEffectEnvelope      envelope42;     //xy=1051.9259643554688,1732.7408065795898
AudioEffectEnvelope      envelope36;     //xy=1052.9259643554688,1497.7408065795898
AudioEffectEnvelope      envelope49;     //xy=1050.9259643554688,2005.7408065795898
AudioEffectEnvelope      envelope39;     //xy=1052.9259643554688,1609.7408065795898
AudioEffectEnvelope      envelope40;     //xy=1052.9259643554688,1648.7408065795898
AudioEffectEnvelope      envelope35;     //xy=1053.9259643554688,1457.7408065795898
AudioEffectEnvelope      envelope37;     //xy=1054.9259643554688,1532.7408065795898
AudioEffectEnvelope      envelope50;     //xy=1052.9259643554688,2050.74080657959
AudioEffectEnvelope      envelope38;     //xy=1054.9259643554688,1569.7408065795898
AudioEffectEnvelope      envelope44;     //xy=1054.9259643554688,1815.7408065795898
AudioEffectEnvelope      envelope47;     //xy=1054.9259643554688,1927.7408065795898
AudioEffectEnvelope      envelope48;     //xy=1054.9259643554688,1966.7408065795898
AudioEffectEnvelope      envelope43;     //xy=1055.9259643554688,1775.7408065795898
AudioEffectEnvelope      envelope57;     //xy=1054.9259643554688,2328.74080657959
AudioEffectEnvelope      envelope45;     //xy=1056.9259643554688,1850.7408065795898
AudioEffectEnvelope      envelope52;     //xy=1055.9259643554688,2133.74080657959
AudioEffectEnvelope      envelope46;     //xy=1056.9259643554688,1887.7408065795898
AudioEffectEnvelope      envelope55;     //xy=1055.9259643554688,2245.74080657959
AudioEffectEnvelope      envelope56;     //xy=1055.9259643554688,2284.74080657959
AudioEffectEnvelope      envelope51;     //xy=1056.9259643554688,2093.74080657959
AudioEffectEnvelope      envelope58;     //xy=1056.9259643554688,2373.74080657959
AudioEffectEnvelope      envelope53;     //xy=1057.9259643554688,2168.74080657959
AudioEffectEnvelope      envelope54;     //xy=1057.9259643554688,2205.74080657959
AudioEffectEnvelope      envelope60;     //xy=1059.9259643554688,2456.74080657959
AudioEffectEnvelope      envelope59;     //xy=1060.9259643554688,2416.74080657959
AudioEffectEnvelope      envelope61;     //xy=1061.9259643554688,2491.74080657959
AudioMixer4              mixer1;         //xy=1304.9259643554688,227.74080657958984
AudioMixer4              mixer2;         //xy=1304.9259643554688,306.74080657958984
AudioMixer4              mixer3;         //xy=1302.9259643554688,381.74080657958984
AudioMixer4              mixer4;         //xy=1301.9259643554688,453.74080657958984
AudioMixer4              mixer5;         //xy=1496.9259643554688,365.74080657958984
AudioMixer4              mixer6;         //xy=1316.9259643554688,878.7408065795898
AudioMixer4              mixer7;         //xy=1315.9259643554688,948.7408065795898
AudioMixer4              mixer8;         //xy=1318.9259643554688,1021.7408065795898
AudioMixer4              mixer9;         //xy=1317.9259643554688,1092.7408065795898
AudioMixer4              mixer10;        //xy=1511.9259643554688,966.7408065795898
AudioMixer4              mixer11;        //xy=1327.9259643554688,1523.7408065795898
AudioMixer4              mixer12;        //xy=1328.9259643554688,1590.7408065795898
AudioMixer4              mixer13;        //xy=1328.9259643554688,1657.7408065795898
AudioMixer4              mixer14;        //xy=1326.9259643554688,1723.7408065795898
AudioMixer4              mixer15;        //xy=1523.9259643554688,1613.7408065795898
AudioMixer4              mixer16;        //xy=1330.9259643554688,2162.74080657959
AudioMixer4              mixer17;        //xy=1328.9259643554688,2232.74080657959
AudioMixer4              mixer18;        //xy=1326.9259643554688,2299.74080657959
AudioMixer4              mixer19;        //xy=1325.9259643554688,2368.74080657959
AudioMixer4              mixer20;        //xy=1518.9259643554688,2243.74080657959
AudioMixer4              mixer21;        //xy=1778.9259643554688,1363.7408065795898
AudioOutputI2S           i2s1;           //xy=1952.5927734375,1364.1853332519531
AudioConnection          patchCord1(waveform1, envelope1);
AudioConnection          patchCord2(waveform2, envelope2);
AudioConnection          patchCord3(waveform3, envelope3);
AudioConnection          patchCord4(waveform4, envelope4);
AudioConnection          patchCord5(waveform5, envelope5);
AudioConnection          patchCord6(waveform6, envelope6);
AudioConnection          patchCord7(waveform7, envelope7);
AudioConnection          patchCord8(waveform8, envelope8);
AudioConnection          patchCord9(waveform9, envelope9);
AudioConnection          patchCord10(waveform10, envelope10);
AudioConnection          patchCord11(waveform11, envelope11);
AudioConnection          patchCord12(waveform12, envelope12);
AudioConnection          patchCord13(waveform13, envelope13);
AudioConnection          patchCord14(waveform14, envelope14);
AudioConnection          patchCord15(waveform15, envelope15);
AudioConnection          patchCord16(waveform16, envelope16);
AudioConnection          patchCord17(waveform17, envelope17);
AudioConnection          patchCord18(waveform18, envelope18);
AudioConnection          patchCord19(waveform19, envelope19);
AudioConnection          patchCord20(waveform21, envelope21);
AudioConnection          patchCord21(waveform22, envelope22);
AudioConnection          patchCord22(waveform23, envelope23);
AudioConnection          patchCord23(waveform24, envelope24);
AudioConnection          patchCord24(waveform25, envelope25);
AudioConnection          patchCord25(waveform26, envelope26);
AudioConnection          patchCord26(waveform27, envelope27);
AudioConnection          patchCord27(waveform28, envelope28);
AudioConnection          patchCord28(waveform29, envelope29);
AudioConnection          patchCord29(waveform30, envelope30);
AudioConnection          patchCord30(waveform31, envelope31);
AudioConnection          patchCord31(waveform32, envelope32);
AudioConnection          patchCord32(waveform20, envelope20);
AudioConnection          patchCord33(waveform33, envelope33);
AudioConnection          patchCord34(waveform34, envelope34);
AudioConnection          patchCord35(waveform35, envelope35);
AudioConnection          patchCord36(waveform36, envelope36);
AudioConnection          patchCord37(waveform37, envelope37);
AudioConnection          patchCord38(waveform38, envelope38);
AudioConnection          patchCord39(waveform39, envelope39);
AudioConnection          patchCord40(waveform40, envelope40);
AudioConnection          patchCord41(waveform41, envelope41);
AudioConnection          patchCord42(waveform42, envelope42);
AudioConnection          patchCord43(waveform43, envelope43);
AudioConnection          patchCord44(waveform44, envelope44);
AudioConnection          patchCord45(waveform45, envelope45);
AudioConnection          patchCord46(waveform46, envelope46);
AudioConnection          patchCord47(waveform47, envelope47);
AudioConnection          patchCord48(waveform48, envelope48);
AudioConnection          patchCord49(waveform49, envelope49);
AudioConnection          patchCord50(waveform50, envelope50);
AudioConnection          patchCord51(waveform51, envelope51);
AudioConnection          patchCord52(waveform52, envelope52);
AudioConnection          patchCord53(waveform53, envelope53);
AudioConnection          patchCord54(waveform54, envelope54);
AudioConnection          patchCord55(waveform55, envelope55);
AudioConnection          patchCord56(waveform56, envelope56);
AudioConnection          patchCord57(waveform57, envelope57);
AudioConnection          patchCord58(waveform58, envelope58);
AudioConnection          patchCord59(waveform59, envelope59);
AudioConnection          patchCord60(waveform60, envelope60);
AudioConnection          patchCord61(waveform61, envelope61);
AudioConnection          patchCord62(envelope1, 0, mixer1, 0);
AudioConnection          patchCord63(envelope2, 0, mixer1, 1);
AudioConnection          patchCord64(envelope9, 0, mixer3, 0);
AudioConnection          patchCord65(envelope4, 0, mixer1, 3);
AudioConnection          patchCord66(envelope7, 0, mixer2, 2);
AudioConnection          patchCord67(envelope8, 0, mixer2, 3);
AudioConnection          patchCord68(envelope3, 0, mixer1, 2);
AudioConnection          patchCord69(envelope5, 0, mixer2, 0);
AudioConnection          patchCord70(envelope6, 0, mixer2, 1);
AudioConnection          patchCord71(envelope17, 0, mixer6, 0);
AudioConnection          patchCord72(envelope10, 0, mixer3, 1);
AudioConnection          patchCord73(envelope18, 0, mixer6, 1);
AudioConnection          patchCord74(envelope12, 0, mixer3, 3);
AudioConnection          patchCord75(envelope15, 0, mixer4, 2);
AudioConnection          patchCord76(envelope16, 0, mixer4, 3);
AudioConnection          patchCord77(envelope11, 0, mixer3, 2);
AudioConnection          patchCord78(envelope25, 0, mixer8, 0);
AudioConnection          patchCord79(envelope13, 0, mixer4, 0);
AudioConnection          patchCord80(envelope14, 0, mixer4, 1);
AudioConnection          patchCord81(envelope20, 0, mixer6, 3);
AudioConnection          patchCord82(envelope23, 0, mixer7, 2);
AudioConnection          patchCord83(envelope24, 0, mixer7, 3);
AudioConnection          patchCord84(envelope19, 0, mixer6, 2);
AudioConnection          patchCord85(envelope26, 0, mixer8, 1);
AudioConnection          patchCord86(envelope21, 0, mixer7, 0);
AudioConnection          patchCord87(envelope22, 0, mixer7, 1);
AudioConnection          patchCord88(envelope33, 0, mixer11, 0);
AudioConnection          patchCord89(envelope28, 0, mixer8, 3);
AudioConnection          patchCord90(envelope31, 0, mixer9, 2);
AudioConnection          patchCord91(envelope32, 0, mixer9, 3);
AudioConnection          patchCord92(envelope27, 0, mixer8, 2);
AudioConnection          patchCord93(envelope34, 0, mixer11, 1);
AudioConnection          patchCord94(envelope29, 0, mixer9, 0);
AudioConnection          patchCord95(envelope30, 0, mixer9, 1);
AudioConnection          patchCord96(envelope41, 0, mixer13, 0);
AudioConnection          patchCord97(envelope42, 0, mixer13, 1);
AudioConnection          patchCord98(envelope36, 0, mixer11, 3);
AudioConnection          patchCord99(envelope49, 0, mixer16, 0);
AudioConnection          patchCord100(envelope39, 0, mixer12, 2);
AudioConnection          patchCord101(envelope40, 0, mixer12, 3);
AudioConnection          patchCord102(envelope35, 0, mixer11, 2);
AudioConnection          patchCord103(envelope37, 0, mixer12, 0);
AudioConnection          patchCord104(envelope50, 0, mixer16, 1);
AudioConnection          patchCord105(envelope38, 0, mixer12, 1);
AudioConnection          patchCord106(envelope44, 0, mixer13, 3);
AudioConnection          patchCord107(envelope47, 0, mixer14, 2);
AudioConnection          patchCord108(envelope48, 0, mixer14, 3);
AudioConnection          patchCord109(envelope43, 0, mixer13, 2);
AudioConnection          patchCord110(envelope57, 0, mixer18, 0);
AudioConnection          patchCord111(envelope45, 0, mixer14, 0);
AudioConnection          patchCord112(envelope52, 0, mixer16, 3);
AudioConnection          patchCord113(envelope46, 0, mixer14, 1);
AudioConnection          patchCord114(envelope55, 0, mixer17, 2);
AudioConnection          patchCord115(envelope56, 0, mixer17, 3);
AudioConnection          patchCord116(envelope51, 0, mixer16, 2);
AudioConnection          patchCord117(envelope58, 0, mixer18, 1);
AudioConnection          patchCord118(envelope53, 0, mixer17, 0);
AudioConnection          patchCord119(envelope54, 0, mixer17, 1);
AudioConnection          patchCord120(envelope60, 0, mixer18, 3);
AudioConnection          patchCord121(envelope59, 0, mixer18, 2);
AudioConnection          patchCord122(envelope61, 0, mixer19, 0);
AudioConnection          patchCord123(mixer4, 0, mixer5, 3);
AudioConnection          patchCord124(mixer3, 0, mixer5, 2);
AudioConnection          patchCord125(mixer1, 0, mixer5, 0);
AudioConnection          patchCord126(mixer2, 0, mixer5, 1);
AudioConnection          patchCord127(mixer7, 0, mixer10, 1);
AudioConnection          patchCord128(mixer6, 0, mixer10, 0);
AudioConnection          patchCord129(mixer9, 0, mixer10, 3);
AudioConnection          patchCord130(mixer8, 0, mixer10, 2);
AudioConnection          patchCord131(mixer14, 0, mixer15, 3);
AudioConnection          patchCord132(mixer11, 0, mixer15, 0);
AudioConnection          patchCord133(mixer12, 0, mixer15, 1);
AudioConnection          patchCord134(mixer19, 0, mixer20, 3);
AudioConnection          patchCord135(mixer13, 0, mixer15, 2);
AudioConnection          patchCord136(mixer18, 0, mixer20, 2);
AudioConnection          patchCord137(mixer17, 0, mixer20, 1);
AudioConnection          patchCord138(mixer16, 0, mixer20, 0);
AudioConnection          patchCord139(mixer5, 0, mixer21, 0);
AudioConnection          patchCord140(mixer10, 0, mixer21, 1);
AudioConnection          patchCord141(mixer20, 0, mixer21, 3);
AudioConnection          patchCord142(mixer15, 0, mixer21, 2);
AudioConnection          patchCord143(mixer21, 0, i2s1, 0);
AudioConnection          patchCord144(mixer21, 0, i2s1, 1);
AudioControlSGTL5000     audioShield;    //xy=2095.148193359375,1364.2963562011719
// GUItool: end automatically generated code




AudioSynthWaveform* Waveforms[OCTAVES_CNT][NOTES_PER_OCTAVE] = {
    {
        &waveform1,
        &waveform2,
        &waveform3,
        &waveform4,
        &waveform5,
        &waveform6,
        &waveform7,
        &waveform8,
        &waveform9,
        &waveform10,
        &waveform11,
        &waveform12,
    }, {
        &waveform13,
        &waveform14,
        &waveform15,
        &waveform16,
        &waveform17,
        &waveform18,
        &waveform19,
        &waveform20,
        &waveform21,
        &waveform22,
        &waveform23,
        &waveform24,
    },{
        &waveform25,
        &waveform26,
        &waveform27,
        &waveform28,
        &waveform29,
        &waveform30,
        &waveform31,
        &waveform32,
        &waveform33,
        &waveform34,
        &waveform35,
        &waveform36,
    },{
        &waveform37,
        &waveform38,
        &waveform39,
        &waveform40,
        &waveform41,
        &waveform42,
        &waveform43,
        &waveform44,
        &waveform45,
        &waveform46,
        &waveform47,
        &waveform48,
    },{
        &waveform49,
        &waveform50,
        &waveform51,
        &waveform52,
        &waveform53,
        &waveform54,
        &waveform55,
        &waveform56,
        &waveform57,
        &waveform58,
        &waveform59,
        &waveform60,
    },{
        &waveform61,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    }
};

AudioEffectEnvelope* Envelopes[OCTAVES_CNT][NOTES_PER_OCTAVE] = {
    {
        &envelope1,
        &envelope2,
        &envelope3,
        &envelope4,
        &envelope5,
        &envelope6,
        &envelope7,
        &envelope8,
        &envelope9,
        &envelope10,
        &envelope11,
        &envelope12,
    },{
        &envelope13,
        &envelope14,
        &envelope15,
        &envelope16,
        &envelope17,
        &envelope18,
        &envelope19,
        &envelope20,
        &envelope21,
        &envelope22,
        &envelope23,
        &envelope24,
    },{
        &envelope25,
        &envelope26,
        &envelope27,
        &envelope28,
        &envelope29,
        &envelope30,
        &envelope31,
        &envelope32,
        &envelope33,
        &envelope34,
        &envelope35,
        &envelope36,
    },{
        &envelope37,
        &envelope38,
        &envelope39,
        &envelope40,
        &envelope41,
        &envelope42,
        &envelope43,
        &envelope44,
        &envelope45,
        &envelope46,
        &envelope47,
        &envelope48,
    },{
        &envelope49,
        &envelope50,
        &envelope51,
        &envelope52,
        &envelope53,
        &envelope54,
        &envelope55,
        &envelope56,
        &envelope57,
        &envelope58,
        &envelope59,
        &envelope60,
    },{
        &envelope61,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    }
};

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
    &mixer17,
    &mixer18,
    &mixer19,
    &mixer20,
    &mixer21,
};

// Analog multiplexed inputs, 1 / octave
#define AI_OCT_1    A10 // = DIO 22
#define AI_OCT_2    A11 // = DIO 21
#define AI_OCT_3    A19 // = DIO 38 
#define AI_OCT_4    A20 // = DIO 39
#define AI_OCT_5    A21 // not a DIO
#define AI_OCT_6    A22 // not a DIO

// Multiplexer address outputs
#define ADDR_PIN_CNT    4
#define MUX_ADDR_0     24
#define MUX_ADDR_1     25
#define MUX_ADDR_2     26
#define MUX_ADDR_3     27

int MuxAddressPins[ADDR_PIN_CNT] = { MUX_ADDR_0, MUX_ADDR_1, MUX_ADDR_2, MUX_ADDR_3 };
int analogInPins[OCTAVES_CNT] = { AI_OCT_1, AI_OCT_2, AI_OCT_3, AI_OCT_4, AI_OCT_5, AI_OCT_6 };

KeyboardKeyClass Keys[OCTAVES_CNT][NOTES_PER_OCTAVE];

void setup()
{
    Serial.begin(115200);
    delay(500);

    for (uint ai = 0; ai < OCTAVES_CNT; ai++)
        pinMode(analogInPins[ai], INPUT);

    // Initialise multiplexer addressing
    for (uint bit = 0; bit < ADDR_PIN_CNT; bit++) {
        pinMode(MuxAddressPins[bit], OUTPUT);
        digitalWrite(MuxAddressPins[bit], LOW);
    }

    // Initialise key objects
    for (uint octave = 0; octave < OCTAVES_CNT; octave++) {
        for (uint note = 0; note < NOTES_PER_OCTAVE; note++) {
            Keys[octave][note].Init(octave, note, Waveforms[octave][note], Envelopes[octave][note]);
            Keys[octave][note].sustainActive = false;
        }
    }
    
    // Initialise mixer objects
    for (uint m = 0; m < MIXER_CNT; m++) {
        Mixers[m]->gain(0, 0.5f);
        Mixers[m]->gain(1, 0.5f);
        Mixers[m]->gain(2, 0.5f);
        Mixers[m]->gain(3, 0.5f);
    }

    // Initialise audio
    AudioMemory(61);
    audioShield.enable();
    audioShield.volume(2.0f);
}

uint currentOctave = 0;
uint currentNote = 0;
uint32_t lastNoteStart;
uint32_t keyPressStartTimes[OCTAVES_CNT][NOTES_PER_OCTAVE] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
};

#define NOTES_COUNT 36
uint notes[NOTES_COUNT][2] = {
    { 0, 0 },
    { 2, 2 },
    { 1, 4 },
    { 3, 5 },
    { 4, 7 },
    { 1, 9 },
    { 2, 11 },
    { 0, 0 },
    { 0, 2 },
    { 0, 4 },
    { 0, 5 },
    { 1, 7 },
    { 1, 9 },
    { 1, 11 },
    { 1, 0 },
    { 1, 2 },
    { 1, 4 },
    { 1, 5 },
    { 1, 7 },
    { 1, 9 },
    { 1, 11 },
    { 3, 0 },
    { 3, 2 },
    { 3, 4 },
    { 3, 5 },
    { 3, 7 },
    { 3, 9 },
    { 3, 11 },
    { 4, 0 },
    { 4, 2 },
    { 4, 4 },
    { 4, 5 },
    { 4, 7 },
    { 4, 9 },
    { 4, 11 },
    { 5, 0 },
};

int currentNoteId = 0;
 
void loop()
{
    // Scan the keyboard
    for (uint note = 0; note < NOTES_PER_OCTAVE; note++) {
        // Write the note number binary value over the 4 multiplexer address lines
        // (therefore selecting one note in each octave, or 1 line in each multiplexer)

        for (uint bit = 0; bit < ADDR_PIN_CNT; bit++)
            digitalWrite(MuxAddressPins[bit], 1 & (note >> bit));

        delayMicroseconds(1); // leave the multiplexer some time to switch (~500ns @3.3V)

        for (uint octave = 0; octave < OCTAVES_CNT; octave++) {
            if (Keys[octave][note].IsValid()) {
                //Keys[octave][key].SetInputVoltage(analogInPins[octave], millis());
                Keys[octave][note].SetInputVoltage(SimulateKeyMotionVoltage(keyPressStartTimes[octave][note]), millis());
            }
        }
    }

    uint32_t now = millis();

    // press next key
    if ((now - lastNoteStart) > 200) {
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

        /*
        currentNoteId = (currentNoteId + 1) % NOTES_COUNT;
        currentOctave = notes[currentNoteId][0];
        currentNote = notes[currentNoteId][1];
        */

        keyPressStartTimes[currentOctave][currentNote] = now;
    }

    delay(1);
}

float SimulateKeyMotionVoltage(uint32_t start)
{
    uint32_t delay = millis() - start;
    if (delay < 10) {
        return 3.3f / 2.0f;
    }
    else if (delay < 15) {
        return 3.3f;
    }
    else if (delay < 100) {
        return 3.3f / 2.0f;
    }
    else {
        return 0.0f;
    }
}
