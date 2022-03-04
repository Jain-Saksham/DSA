#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,p,x;
		cin>>n>>p>>x;
		int ans=0;
		int q=p%x;
		q--;
		int s=((n-1)/x)*x;
		s=n-1-s;
		if(q>s)
		{
			ans+=(s+1)*((n-1)/x+1)+(q-s)*((n-1)/x);
		}
		else
		{
			ans+=((n-1)/x+1)*(q+1);
		}
		for(int j=q+1;j<n;j+=x)
		{
			ans++;
			if(j==p)
			{
				cout<<ans<<endl;
				break;
			}
		}
	}
	return 0;
}
