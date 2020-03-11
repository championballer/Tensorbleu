#include<iostream>
#include<vector>
#include "../matrix_multiplication.h"

int main()
{
	std::vector<double>  v = {1,2,3};
	std::vector<std::vector<double> > m = {{2,1,3},{1,3,1},{3,1,2}};
	std::vector<std::vector<double> > m1 = {{2},{1},{3}};
	std::cout<<v.size()<<std::endl;
	std::cout<<m.size()<<" "<<m[0].size()<<std::endl;
	std::vector<double> result = matrix_multiplication(m,v);
	std::vector<double> result1 = matrix_multiplication(m1,v);
	for(double i=0;i<result.size();i++)
	{
		std::cout<<result[i]<<" ";
	}
	std::cout<<std::endl;
	for(double i=0;i<result1.size();i++)
	{
		std::cout<<result1[i]<<" ";
	}
	std::cout<<std::endl;
}