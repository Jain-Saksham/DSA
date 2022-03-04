#include<iostream>
using namespace std;
void findMaxHam(int arr[],int n)
{ 
	int ham[n-1];
	for(int j=0;j<n-1;j++)
	{
	int arr1[n],temp,count=0;
	for(int i=0;i<n;i++)
	{
		arr1[i]=arr[i];
	}
	temp=arr1[0];
	for(int i=0;i<n-1;i++)
	{
		arr1[i]=arr1[i+1];
	}
	arr1[n-1]=temp;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr1[i])
		{
			count++;
		}
	}
	ham[j]=count;
	}
	int max=ham[0];
	for(int i=1;i<n-1;i++)
	{
		if(max<ham[i])
		{
			max=ham[i];
		}
	}
	cout<<max;
};
int main()
{
	int n;
	cout<<"Enter no. of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Hamming Distance:";
	findMaxHam(arr,n);
	return 0;
}
