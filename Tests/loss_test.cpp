#include<iostream>
#include<vector>
#include "../loss_functions.h"

int main()
{
	std::cout<<squared_error(1.5,6)<<std::endl;

	std::vector<double> output = {1,2,3};
	std::vector<double> label = {3,2,1};

	std::cout<<mean_squared_error(output,label)<<std::endl;
}