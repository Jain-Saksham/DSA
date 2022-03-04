#include<bits/stdc++.h>
using namespace std;

class StackNode
{
	public:
		int data;
		StackNode* next;
};
StackNode* newNode(int data)
{
    StackNode* stackNode = new StackNode();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}
void push(StackNode** node,int x)
{
	StackNode* stacknode = newNode(x);
	stacknode->next=*node;
	*node=stacknode;
	cout<<x<<"pushed to stack.";
}
int pop(StackNode** node)
{
	
}
int main()
{
	StackNode* root=NULL;
	push(&root,10);
	push(&root,20);
	push(&root,30);
	push(&root,40);
	push(&root,50);
	
	cout<<pop(&root)<<"popped out from stack.";
	
	cout<<"Elements in stack:";
	while(!isEmpty(root))
	{
		cout<<peek(root)<<" ";
		pop(&root);
	}
	return 0;
}
