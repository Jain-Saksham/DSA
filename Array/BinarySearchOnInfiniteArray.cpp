#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int target,int start,int end)
{
    while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(target==arr[mid])
		{
			return mid;
		}
		else if(target<arr[mid])
		{
			end=mid-1;
		}
		else if(target>arr[mid])
		{
			start=mid+1;
		}
	}
	return -1;
}
int ans(int arr[],int target)
{
    int start=0;
    int end=1;
    while(arr[end]<target)
    {
        int temp=end+1;
        end=end+(end-start+1);
        start=temp;
    }
    return search(arr,target,start,end);
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,89,100};
    int res=ans(arr,9);
    cout<<res;
    return 0;
}