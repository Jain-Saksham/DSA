#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	if (str1.length() != str2.length())
    {
    	cout<<"false";
	}    
 	else
 	{
 		string temp = str1 + str1;
    	if(temp.find(str2) != string::npos)
    	{
    		cout<<"true";
		}
		else
		{
			cout<<"false";
		}
	}
	return 0;
}
