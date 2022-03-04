#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	bool res=false;
	int n1=s1.length();
	int n2=s2.length();
	if(n1==n2)
	{
		string temp=s1+s1;
		int n=temp.length();
		for(int i=0;i<n;i++)
		{
			if(s2==temp.substr(i,n2));
			{
				res=true;
			}
		}
	}
	cout<<res;
	return 0;
}
