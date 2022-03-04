#include<iostream>
using namespace std;
int countRotations(int arr[],int n)
{
	int min=arr[0],min_index;
	for(int i=1;i<n;i++)
	{
		if(min>arr[i])
		{
			min_index=i;
			break;
		}
		else
		{
			min_index=0;
		}
	}
	return min_index;
}
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
	cout<<countRotations(arr,n);
	return 0;
}
