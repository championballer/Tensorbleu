vector<vector<int> > initialise(int m, int n)
{
	vector<vector<int> > toReturn(m);
	for(int i=0;i<m;i++)
	{
		toReturn[i] = vector<int> (n);
		for(int j=0;j<n;j++)
		{
			toReturn[i][j] = rand();
		}
	}

	return toReturn;

}



class FullyConnectedNetwork{

	unordered_map<int, vector<vector<int> > > weights;
	unordered_map<int, vector<int> > biases;

	public:


	FullyConnectedNetwork(int input, int output, vector<int> hidden_sizes)
	{
		
		weights[0] = initialise(input, hidden_sizes[0]);
		for(int i=1;i<hidden_sizes.size();i++)
		{
			weights[i] = initialise(hidden_sizes[i-1],hidden_sizes[i]);
		}

		weights[hidden_sizes.size()] = initialise(hidden_sizes[hidden_sizes.size()-1],output);
	}

	void printWeights()
	{
		for(int i=0;i<weights.size();i++)
		{
			for(int j=0;j<weights[i].size();j++)
			{
				for(int k=0;k<weights[i][j].size();k++)
				{
					cout<<weights[i][j][k]<<" ";
				}
				cout<<endl;
			}
			cout<<endl;
		}
	}

};