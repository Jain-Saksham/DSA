#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack
{
	int top;
	public:
		int a[MAX];
		Stack(){top=-1;}
		bool push(int x);
		int pop();
		int peek();
		bool isEmpty();
};
bool Stack::push(int x)
{
	if(top>=(MAX-1))
	{
		cout<<"Stack Overflow"<<endl;
		return false;
	}
	else
	{
		a[++top]=x;
		cout<<x<<" pushed into stack."<<endl;
		return true;
	}
}
int Stack::pop()
{
	if(top<0)
	{
		cout<<"Stack Underflow"<<endl;
		return 0;
	}
	else
	{
		int x=a[top--];
		return x;
	}
}
int Stack::peek()
{
	if(top<0)
	{
		cout<<"Stack is empty"<<endl;
		return 0;
	}
	else
	{
		int x=a[top];
		return x;
	}
}
bool Stack::isEmpty()
{
	if(top<0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	cout<<s.pop()<<" popped from the stack."<<endl;
	
	cout<<"Elements in stack:"<<endl;
	while(!s.isEmpty())
	{
		cout<<s.peek()<<" ";
		s.pop();
	}
	return 0;
}
