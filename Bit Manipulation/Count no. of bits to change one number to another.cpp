#include<iostream>
using namespace std;
void countDiffBits(int a,int b)
{
	int x=a^b;
	int count=0;
    while(x!=0)
    {
        if(x&1!=0)
        {
            count++;
        }
    	x=x>>1;	    
	}
	cout<<count;
}
int main()
{
	int a,b;
	cin>>a>>b;
	countDiffBits(a,b);
	return 0;
}
