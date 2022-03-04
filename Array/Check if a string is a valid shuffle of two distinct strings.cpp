#include<bits/stdc++.h>
using namespace std;
bool checkLen(string first,string second,string res)
{
	if(first.length()+second.length()==res.length())
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool checkShuffle(string first,string second,string res)
{
	sort(first.begin(),first.end());
	sort(second.begin(),second.end());
	sort(res.begin(),res.end());
	int i=0,j=0,k=0;
	while(k<res.length())
	{
		if(i<first.length()&&first[i]==res[k])
		{
			i++;
		}
		else if(j<second.length()&&second[j]==res[k])
		{
			j++;
		}
		else
		{
			return false;
		}
		k++;
	}
	return true;
}
int main()
{
	string first="XY";
	string second="12";
	string arr[3]={"1XY2", "Y1X2", "Y21XX"};
	for(int i=0;i<3;i++)
	{
		if(checkLen(first,second,arr[i]))
		{
			if(checkShuffle(first,second,arr[i]))
			{
				cout<<"true"<<endl;
			}
		}
		else
		{
			cout<<"false"<<endl;
		}
	}
	return 0;
}
