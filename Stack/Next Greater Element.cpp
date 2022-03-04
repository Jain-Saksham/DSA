#include<bits/stdc++.h>
using namespace std;
vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    stack<long long> st;
    for(int i=n-1;i>=0;i--)
    {
        if(st.empty()==true)
        {
            st.push(arr[i]);
            arr[i]=-1;
            continue;
        }
        if(arr[i]<st.top())
        {
         	long long t=arr[i];
          	arr[i]=st.top();
           	//cout<<arr[i]<<" "<<st.top()<<endl;
           	st.push(t);
        }
        else
        {
           	while(arr[i]>=st.top())
           	{
           		//cout<<arr[i]<<" "<<st.top()<<endl;
           		st.pop();
               	if(st.empty())
               	{
               		st.push(arr[i]);
               		arr[i]=-1;
               		cout<<arr[i]<<" "<<st.top()<<endl;
               		continue;
				}
            }
           	if(st.empty()==false)
           	{
               	long long t=arr[i];
               	arr[i]=st.top();
               	st.push(t);
               	//cout<<arr[i]<<" "<<st.top()<<endl;
           	}
       	}
    }
    for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	vector<long long> arr={6,8,0,1,3};
	nextLargerElement(arr,5);
	return 0;
}
