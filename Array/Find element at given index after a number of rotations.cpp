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
void leftRotate(int arr[],int n,int d, int range[][2], int num)
{
	if(d==0)
	{
		return ;
	}
	d=d%n;
	for(int i=0;i<d;i++)
	{
		int p=range[i][0];
		int q=range[i][1];
		
		reverse(arr,p,q-1);
		reverse(arr,p,q);
	}
	cout<<"After Rotation:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Index:";
	for(int i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			cout<<i;
		}
	}	
}
int main()
{
	int n,rot,num;
	cout<<"Enter number of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number of rotations:";
	cin>>rot;
	cout<<"Enter range of roations:";
	int range[rot][2];
	for(int i=0;i<rot;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>range[i][j];
		}
	}
	cout<<"Enter no. to be found:";
	cin>>num;
	leftRotate(arr,n,rot,range,num);
	return 0;
}
