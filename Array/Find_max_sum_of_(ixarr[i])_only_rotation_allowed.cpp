#include<iostream>
using namespace std;
void maxValue(int arr[],int n)
{
	int arrSum=0,currVal=0,maxVal;
	for(int i=0;i<n;i++)
	{
		arrSum+=arr[i];
		currVal+=(i*arr[i]);
	}
	maxVal=currVal;
	for(int j=1;j<n;j++)
	{
		currVal = currVal + arrSum-n*arr[n-j];
		if(currVal>maxVal)
		{
			maxVal=currVal;
		}
	}
	cout<<maxVal;
}
int main()
{
	int n;
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter elements:";
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Max sum:";
	maxValue(arr,n);
	return 0;
}
