#pragma once

using namespace std;

int ReLU(int x)
{
	return max(0,x);
}

double Sigmoid(int x)
{
	return 1/(1+exp(-1*x));
}