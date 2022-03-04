#include<bits/stdc++.h>
using namespace std;
bool checkIfPowerOf2(int n)
{
	//return (n&&!(n&(n-1)));
	if(n==0)
	{
		return false;
	}
	return (ceil(log2(n))==floor(log2(n)));
}
int main()
{
	int n;
	cin>>n;
	cout<<checkIfPowerOf2(n);
	return 0;
}
