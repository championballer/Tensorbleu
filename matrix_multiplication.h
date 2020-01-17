#pragma once

vector<int> matrix_multiplication(vector<vector<int> > m, vector<int> v)
{
	vector<int> result;
	for(int i=0;i<m.size();i++)
	{
		int sum = 0;
		for(int j=0;j<m[0].size();j++)
		{
			sum+=(m[i][j]*v[j]);
		}

		result.push_back(sum);
	}

	return result;
}