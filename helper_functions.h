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