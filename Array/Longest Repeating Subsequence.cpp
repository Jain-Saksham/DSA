#include<bits/stdc++.h>
using namespace std;
int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n=str.length();
		    unordered_map<char,int> m;
		    int ma=INT_MIN;
		    for(int i=0;i<n;i++)
		    {
		        m[str[i]]++;
		        if(m[str[i]]>ma)
		        {
		            ma=m[str[i]];
		        }
		    }
		    return ma-1;
		}
int main()
{
	string s;
	cin>>s;
	cout<<LongestRepeatingSubsequence(s);
	return 0;
}
