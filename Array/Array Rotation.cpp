#include<iostream>
using namespace std;
int main()
{
	int n,d,temp;
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<endl;
	int arr[n];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number of elements to rotate:";
	cin>>d;
	for(int i=0;i<d;i++)
	{
		temp=arr[0];
		for(int i=0;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		arr[n-1]=temp;
	}
	cout<<"After Rotation:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
