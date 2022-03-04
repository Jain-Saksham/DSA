#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
		int r1,w1,c1;
		cin>>r1>>w1>>c1;
		int r2,w2,c2;
		cin>>r2>>w2>>c2;
		int count1=0,count2=0;
		if(r1>r2)
		{
			count1++;
		}
		else if(r1<r2)
		{
			count2++;
		}
		if(w1>w2)
		{
			count1++;
		}
		else if(w1<w2)
		{
			count2++;
		}
		if(c1>c2)
		{
			count1++;
		}
		else if(c1<c2)
		{
			count2++;
		}
		if(count1>count2)
		{
			cout<<"A"<<endl;
		}
		else if(count1<count2)
		{
			cout<<"B"<<endl;
		}
	}
	return 0;
}
