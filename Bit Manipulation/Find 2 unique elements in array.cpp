#include<iostream>
using namespace std;
int setBit(int n,int pos)
{
	return (n&(1<<pos)!=0);
}
void unique(int arr[],int n)
{
	int xorsum=0;
	for(int i=0;i<n;i++)
	{
		xorsum=xorsum^arr[i];
	}
	int tempxor=xorsum;
	int pos=0;
	int setbit=0;
	while(setbit!=0)
	{
		setbit=xorsum&1;
		pos++;
		xorsum=xorsum>>1;
	}
	int newxor=0;
	for(int i=0;i<n;i++)
	{
		if(setBit(arr[i],pos-1))
		{
			newxor=newxor^arr[i];
		}
	}
	cout<<newxor<<" "<<(newxor^tempxor)<<endl;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	unique(arr,n);
	return 0;
}
