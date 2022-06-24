#include <iostream>
#include"FB.h"
#include"helpers.cpp"

void runExperiment(int num_samples);


int main()
{
    std::cout << "Temperature Analyzer 1"<<std::endl;
    /*
    FB sample1_EA(-1000,1);
    FB sample2_EA(1000,1);

    sample1_EA.isBoiling();
    sample1_EA.isFreezing();
    
    sample2_EA.isBoiling();
    sample2_EA.isFreezing();

    FB sample3;
    sample3.isBoiling();
    sample3.isFreezing();

    std::cout << "Sample 3 defined:" << std::endl;
    sample3.setTemperature(-500);
    sample3.setContents(3); //0 = no type set, 1 = Ethyl Alcohol, 2 = Oxygen, 3 = water;
    sample3.isBoiling();
    sample3.isFreezing();
    std::cout << "Sample 3 analyzed" << std::endl;
    */

    /*
    FB userSample;
    int contents_input = 0;
    double temperature_input = 0;

    std::cout << "User Sample" << std::endl;
    std::cout << "Enter the contents of sample \n [1 = Ethyl Alcohol, 2 = Oxygen, 3 = water]: ";
    std::cin >> contents_input;
    userSample.setContents(contents_input);
    std::cout << "Enter the temperature in F: ";
    std::cin >> temperature_input;
    userSample.setTemperature(temperature_input);
    std::cout << "Analyzing user sample..." << std::endl;
    userSample.isBoiling();
    userSample.isFreezing();
    */

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Running Experiment " << i + 1 << std::endl;
        runExperiment(randINT(1, 10));
    }


     
  





    return 999;
}


void runExperiment(int num_samples)
{
    std::cout << "Running " << num_samples << " samples.\n";
    FB* experiment_set = nullptr;
    experiment_set = new FB[num_samples];

    for (int i = 0; i < num_samples; i++)
    {
        experiment_set[i].setTemperature(randDOUBLE(-1000,1000));
        experiment_set[i].setContents(randINT(1,3));
        std::cout << "Sample " << i + 1 << ":" << std::endl;
        experiment_set[i].isBoiling();
        experiment_set[i].isFreezing();
    }
    std::cout << "Experiment complete..." << std::endl;  
    std::cout << "------------------------\n";
}