#include<bits/stdc++.h>
using namespace std;
int compute(int arr[],int start,int end,int k)
{
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==k)
            return arr[mid];
        else if(arr[mid]<k)
            return compute(arr,mid+1,end,k);
            
        else if(arr[mid]>k)
            return compute(arr,start,mid-1,k);
    }
    return arr[start];
}
int main()
{
    cout<<"Enter no. of elements:";
    int n;
    cin>>n;
    cout<<"Enter elements:";
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter target:";
    int k;
    cin>>k;
    int res=compute(arr,0,n-1,k);
    cout<<res;
    return 0;
}