#pragma once
#include "../helper_functions.h"

class MLP{
	
	private:
	
	int b;
	
	MLP(){
	b = 0;
	}
	
	bool model(std::vector<int> x)
	{
		return sum(x) >= b;
	}	
		
	std::vector<int> predict(std::vector<int> x)
	{
		std::vector<int> result;
		for(int i=0;i<x.size();i++)
		{
			result.push_back()
		}
	}
	
	void fit(vector<int> x, vector<int> labels)
	{
		
	}
	
}
