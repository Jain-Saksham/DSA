// size = 7
// array = {2,5,1,8,2,9,1}
// window size k = 3, 0<k<n
// find max of sum of all subarrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    int left=0,right=k,sum=0,res=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    for(int i=right;i<n;i++)
    {
        res=max(res,sum);
        sum-=arr[left];
        sum+=arr[right];
        left++;
        right++;
    }
    cout<<res;
}