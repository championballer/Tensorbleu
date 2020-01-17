#include<bits/stdc++.h>
#include"activation_functions.h"

using namespace std;

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

int main()
{
	vector<vector<int> > m = {{2,3},{3,2},{1,2}} ;
	vector<int> v = {5,-6};

	vector<int> result = matrix_multiplication(m,v);

	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<endl;
	}

	for(int i=0;i<result.size();i++)
	{
		cout<<ReLU(result[i])<<endl;
	}

}