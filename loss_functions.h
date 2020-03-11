#pragma once
#include<math.h>

double squared_error(double output, double label)
{
	return pow(output-label,2);
}

double mean_squared_error(std::vector<double> output, std::vector<double> label)
{
	double loss = 0;
	for(int i=0;i<output.size();i++)
	{
		loss+=squared_error(output[i],label[i]);
	}

	loss/=(output.size());
	return loss;
}