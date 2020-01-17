#include<bits/stdc++.h>
#include"activation_functions.h"
#include"matrix_multiplication.h"

using namespace std;


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

	for(int i=0;i<result.size();i++)
	{
		cout<<Sigmoid(result[i])<<endl;
	}



}