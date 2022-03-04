#include <iostream>
#include <string.h> 
using namespace std;

int main()
{
    int t;
    cout<<"Enter no. of testcases:";
    cin>>t;
    cout<<endl;
    while(t--)
    {
        string test, temp=""; 
        int count=0;
        cout<<"Input String: "; 
        cin>>test;
        for(int i=0; test[i]!='\0'; i++)
        {
            if (test[i] == test[i+1])
            {
                count++;
            }
            else 
            { 
                temp+=test[i];
            }
        }
        cout<<"Output String: "<<temp<<""<<endl;
        cout<<"NO. of deletions required :"<<count<<endl<<endl;
    } 
    return 0;
}