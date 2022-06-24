#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FB.h"

FB::FB()
{
    temperature = 0;
    contents = 0;
}


FB::FB(double t, int c)
{
    temperature = t;
    contents = c;
}




bool FB::isFreezing()
{
    bool freeze_state = false;
    if (contents == 0)
    {
        std::cout<<"Error: No material defined. Call set contents."<<std::endl;
    }
    else if (contents == 1)
    {
        if(isEthylFreezing())
        {
            std::cout<<"Ethyl Alcohol is at " << temperature <<"F and is freezing."<<std::endl;
            freeze_state = true;
        }   
        else
        {
            std::cout<<"Ethyl Alcohol is at " << temperature <<"F and is not freezing."<<std::endl;
        }
    }
    else if (contents == 2)
    {
        if (isOxygenFreezing())
        {
            std::cout << "Oxygen is at " << temperature << "F and is freezing." << std::endl;
            freeze_state = true;
        }
        else
        {
            std::cout << "Oxygen is at " << temperature << "F and is not freezing." << std::endl;
        }
    }
    else if (contents == 3)
    {
        if (isWaterFreezing())
        {
            std::cout << "Water is at " << temperature << "F and is freezing." << std::endl;
            freeze_state = true;
        }
        else
        {
            std::cout << "Water is at " << temperature << "F and is not freezing." << std::endl;
        }
    }

    return freeze_state;
}

bool FB::isBoiling()
{
    bool boiling_state = false;
    if (contents == 0)
    {
        std::cout << "Error: No material defined. Call set contents." << std::endl;
    }
    else if (contents == 1)
    {
        if (isEthylBoiling())
        {
            std::cout << "Ethyl Alcohol is at " << temperature << "F and is boiling." << std::endl;
            boiling_state = true;
        }
        else
        {
            std::cout << "Ethyl Alcohol is at " << temperature << "F and is not boiling." << std::endl;
        }
    }
    else if (contents == 2)
    {
        if (isOxygenBoiling())
        {
            std::cout << "Oxygen is at " << temperature << "F and is boiling." << std::endl;
            boiling_state = true;
        }
        else
        {
            std::cout << "Oxygen is at " << temperature << "F and is not boiling." << std::endl;
        }
    }
    else if (contents == 3)
    {
        if (isWaterBoiling())
        {
            std::cout << "Water is at " << temperature << "F and is boiling." << std::endl;
            boiling_state = true;
        }
        else
        {
            std::cout << "Water is at " << temperature << "F and is not boiling." << std::endl;
        }
    }

    return boiling_state;
}


void FB::setTemperature(double t)
{
    temperature = t;
}


void FB::setContents(int c)
{
    contents = c;
}


bool FB::isEthylFreezing()
{
    bool freezing_state = false;

    if (temperature <= FP_ethyl_alcohol)
    {
        freezing_state = true;
    }

    return freezing_state;
}


bool FB::isEthylBoiling()
{
    bool boiling_state = false;

    if (temperature >= BP_ethyl_alcohol)
    {
        boiling_state = true;
    }

    return boiling_state;
}


bool FB::isOxygenFreezing()
{
    bool freezing_state = false;

    if (temperature <= FP_oxygen)
    {
        freezing_state = true;
    }

    return freezing_state;
}


bool FB::isOxygenBoiling()
{
    bool boiling_state = false;

    if (temperature >= BP_oxygen)
    {
        boiling_state = true;
    }

    return boiling_state;
}


bool FB::isWaterFreezing()
{
    bool freezing_state = false;

    if (temperature <= FP_water)
    {
        freezing_state = true;
    }

    return freezing_state;
}


bool FB::isWaterBoiling()
{
    bool boiling_state = false;

    if (temperature >= BP_water)
    {
        boiling_state = true;
    }

    return boiling_state;
}

