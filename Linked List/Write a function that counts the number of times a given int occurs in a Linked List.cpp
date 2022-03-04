#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
};
void push(Node** head_ref,int new_data)
{
	Node* new_node=new Node();
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}
void findFreq(Node* node,int n)
{
	int count=0;
	while(node!=NULL)
	{
		if(node->data==n)
		{
			count++;
		}
		node=node->next;
	}
	cout<<count;
}
int main()
{
	Node* head=NULL;
	push(&head,10);
	push(&head,20);
	push(&head,30);
	push(&head,40);
	push(&head,50);
	push(&head,10);
	push(&head,20);
	push(&head,30);
	push(&head,40);
	push(&head,50);
	push(&head,10);
	push(&head,20);
	push(&head,30);
	push(&head,40);
	push(&head,50);
	cout<<"Enter no.: ";
	int n;
	cin>>n;
	findFreq(head,n);
	return 0;
}
