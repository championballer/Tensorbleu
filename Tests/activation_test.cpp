#include<iostream>
#include<vector>
#include "matrix_multiplication.h"
#include "activation_functions.h"

int main()
{
	std::vector<double>  v = {1,2,3};
	std::vector<std::vector<double> > m = {{2,1,3},{1,3,1},{3,1,2}};
	std::vector<double> result = matrix_multiplication(m,v);

	for(double i=0;i<result.size();i++)
	{
		std::cout<<result[i]<<" ";
	}
	std::cout<<std::endl;

	ReLU(result);
	
	std::cout<<"ReLU result: ";
	for(double i=0;i<result.size();i++)
	{
		std::cout<<result[i]<<" ";
	}
	std::cout<<std::endl;

	Sigmoid(result);
	std::cout<<"Sigmoid result: ";
	for(double i=0;i<result.size();i++)
	{
		std::cout<<result[i]<<" ";
	}
	std::cout<<std::endl;
}