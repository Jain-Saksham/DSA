#include<iostream>
using namespace std;
void rearrange(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]!=0&&arr[i+1]!=0)
		{
			arr[i]=2*arr[i];
			arr[i+1]=0;
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			arr[count++]=arr[i];
		}
	}
	while(count<n)
	{
		arr[count++]=0;
	}
	cout<<"Rearranged array:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter number of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rearrange(arr,n);
	return 0;
}
