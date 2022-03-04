#include<iostream>
using namespace std;
void rearrange(int arr[],int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[arr[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Final array:";
    rearrange(arr,n);
    return 0;
}
