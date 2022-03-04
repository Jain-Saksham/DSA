#include<bits/stdc++.h>
using namespace std;
int mycompare(string X,string Y)
{
	string XY=X.append(Y);
	string YX=Y.append(X);
	return XY.compare(YX) > 0 ? 1 : 0;
}
void rearrange(string arr[],int n)
{
	sort(arr[0],arr[n-1],mycompare);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
int main()
{
	cout<<"Enter no. of elements:";
	int n;
	cin>>n;
	cout<<"Enter elements:";
	string arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rearrange(arr,n);
	return 0;
}
