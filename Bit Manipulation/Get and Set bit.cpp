#include<iostream>
using namespace std;
int getbit(int n,int pos)
{
	return (n&(1<<pos))!=0;
}
int setbit(int n,int pos)
{
	return (n|(1<<pos));
}
int clearbit(int n,int pos)
{
	int mask=~(1<<pos);
	return n&mask;
}
int updatebit(int n,int pos,int value)//first clear bit and then set bit to the given value
{
	int mask=~(1<<pos);
	n=n&mask;
	return (n|(value<<pos));
}
int main()
{
	int n;
	cin>>n;
	//cout<<getbit(n,2)<<endl;
	//cout<<setbit(n,1)<<endl;
	//cout<<clearbit(n,2)<<endl;
	cout<<updatebit(n,1,1)<<endl;
	return 0;
}
