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
        cout<<arr[i];
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[n];
    }
    rearrange(arr,n);
    return 0;
}