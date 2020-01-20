#include<bits/stdc++.h>
#include"activation_functions.h"
#include"matrix_multiplication.h"
#include"FullyConnectedNetwork.h"

using namespace std;

void sample_func(vector<int> weights)
{
	for(int i=0;i<weights.size();i++)
	{
		cout<<weights[i]<<" ";
	}
	cout<<endl;
	return;
}

int main()
{


	//seed function to be called once per program
	srand(time(NULL));


	FullyConnectedNetwork model(3,1,{3,2,3});
	model.printWeights();

	// unordered_map<int,vector<vector<int> > > weights;
	// weights[0] = {{2,3},{3,2},{1,2}};
	// weights[1] = {{4,2},{2,1}};

	// cout<<weights.size()<<endl;

	// for(int i=0;i<weights.size();i++)
	// {
	// 	for(int j=0;j<weights[i].size();j++)
	// 	{
	// 		for(int k=0;k<weights[i][j].size();k++)
	// 		{
	// 			cout<<weights[i][j][k]<<" ";
	// 		}
	// 		cout<<endl;
	// 	}

	// 	cout<<endl;
	// }
	// vector<vector<int> > m = {{2,3},{3,2},{1,2}} ;
	// vector<int> v = {5,-6};

	// vector<int> result = matrix_multiplication(weights[0],v);

	// for(int i=0;i<result.size();i++)
	// {
	// 	cout<<result[i]<<endl;
	// }

	// for(int i=0;i<result.size();i++)
	// {
	// 	cout<<ReLU(result[i])<<endl;
	// }

	// for(int i=0;i<result.size();i++)
	// {
	// 	cout<<Sigmoid(result[i])<<endl;
	// }



}