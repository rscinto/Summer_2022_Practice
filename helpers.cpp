#include<iostream>
#include<random>
#include<algorithm>
#include<iterator>
#include<vector>

int randINT(int min, int max)
{
	std::random_device device;
	std::mt19937 mersenne_twister{ device() };
	std::uniform_int_distribution<int> dist{ min,max };

	return dist(mersenne_twister);
}

float randFLOAT(float min, float max)
{
	std::random_device device;
	std::mt19937 mersenne_twister{ device() };
	std::uniform_real_distribution<float> dist{ min,max };

	return dist(mersenne_twister);
}

double randDOUBLE(double min, double max)
{
	std::random_device device;
	std::mt19937 mersenne_twister{ device() };
	std::uniform_real_distribution<double> dist{ min, max };

	return dist(mersenne_twister);
}
