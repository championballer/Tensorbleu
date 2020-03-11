#pragma once
#include "helper_functions.h"
#include "loss_functions.h"
#include "activation_functions.h"

class FullyConnectedNetwork{

	std::unordered_map<int, std::vector<std::vector<int> > > weights;
	std::unordered_map<int, std::vector<int> > biases;

	public:

	/* 
	Constructor for a linear model

	A model with random weights gets intialised and its instance is returned
	*/
	FullyConnectedNetwork(int input, int output, std::vector<int> hidden_sizes)
	{
		
		weights[0] = initialise(input, hidden_sizes[0]);
		for(int i=1;i<hidden_sizes.size();i++)
		{
			weights[i] = initialise(hidden_sizes[i-1],hidden_sizes[i]);
		}

		weights[hidden_sizes.size()] = initialise(hidden_sizes[hidden_sizes.size()-1],output);
	}

	/*
	A function to fit data on the weights
	*/
	void fit()
	{

	}

	/*
	A method to print the weights of a network from weights map
	*/
	void printWeights()
	{
		for(int i=0;i<weights.size();i++)
		{
			for(int j=0;j<weights[i].size();j++)
			{
				for(int k=0;k<weights[i][j].size();k++)
				{
					std::cout<<weights[i][j][k]<<" ";
				}
				std::cout<<std::endl;
			}
			std::cout<<std::endl;
		}
	}

};