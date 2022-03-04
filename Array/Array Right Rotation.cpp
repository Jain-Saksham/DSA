#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end)
{
	int temp=0;
	while(start<end)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void rightRotate(int arr[],int n,int d)
{
	if(d==0)
	{
		return ;
	}
	d=d%n;
	reverse(arr,0,n-1);
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
}
int main()
{
	int n,d;
	cout<<"Enter number of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number of elements to rotate:";
	cin>>d;
	cout<<"After Rotation:";
	rightRotate(arr,n,d);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
