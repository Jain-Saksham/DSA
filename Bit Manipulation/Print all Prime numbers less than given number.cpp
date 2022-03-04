#include<iostream>
using namespace std;
void printPrime(int n)
{
	int arr[100]={0};
	for(int i=2;i<n;i++)
	{
		if(arr[i]==0)
		{
			for(int j=i*i;j<n;j+=i)
			{
				arr[j]=1;
			}
		}
	}
	for(int i=2;i<n;i++)
	{
		if(arr[i]==0)
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int n;
	cin>>n;
	printPrime(n);
	return 0;
}
