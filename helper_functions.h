#pragma once
#include<math.h>

std::vector<std::vector<int> > initialise(int m, int n)
{
	std::vector<std::vector<int> > toReturn(m);
	for(int i=0;i<m;i++)
	{
		toReturn[i] = std::vector<int> (n);
		for(int j=0;j<n;j++)
		{
			toReturn[i][j] = rand();
		}
	}

	return toReturn;
}

int sum(std::vector<int> x)
{
	int result = 0;
	for(int i=0;i<x.size();i++)
	{
		result+=(x[i]);
	}

	return result;
}
