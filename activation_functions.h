#pragma once
#include<algorithm>
#include<math.h>

double ReLU(double x)
{
	return std::max(0,int(x));
}

void ReLU(std::vector<double> & x)
{
	for(int i=0;i<x.size();i++)
	{
		x[i] = ReLU(x[i]);
	}
}

double Sigmoid(double x)
{
	return 1/(1+exp(-1*x));
}

void Sigmoid(std::vector<double> & x)
{
	for(int i=0;i<x.size();i++)
	{
		x[i] = Sigmoid(x[i]);
	}
}