#include <iostream>
using namespace std;

int main() {
    int n,key,count=0;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==key)
            {
                cout<<"true";
                count++;
                break;
            }
        }
    }
    if(count==0)
    {
        cout<<"false";
    }
    
	return 0;
}
