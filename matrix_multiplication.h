#pragma once

std::vector<double> matrix_multiplication(std::vector<std::vector<double> > m, std::vector<double> & v)
{
	std::vector<double> result;
	for(int i=0;i<m[0].size();i++)
	{
		double sum = 0;
		for(int j=0;j<m.size();j++)
		{
			sum+=(m[j][i]*v[j]);
		}

		result.push_back(sum);
	}

	return result;
}