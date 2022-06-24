#ifndef FB_H
#define FB_H

const double FP_ethyl_alcohol = -173;
const double BP_ethyl_alcohol = 172;
const double FP_oxygen = -362;
const double BP_oxygen = -306;
const double FP_water = 32;
const double BP_water = 212;

class FB
{
private:
    double temperature;
    int contents; //0 = no type set, 1 = Ethyl Alcohol, 2 = Oxygen, 3 = water;

    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();


public:
    FB();
    FB(double t, int c);

    bool isFreezing();
    bool isBoiling();
    void setTemperature(double t);
    void setContents(int c);
};

#include"FB.cpp"
#endif