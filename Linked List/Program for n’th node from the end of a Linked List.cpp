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
void findNode(Node* node,int n)
{
	if(n<=0)
	{
		cout<<"ENTER VALID NO.";
		return;
	}
	Node* temp=node;
	int count=1;
	while(temp!=NULL)
	{
		temp=temp->next;
		count++;
	}
	if(count<n)
	{
		cout<<"Not valid";
	}
	for(int i=0;i<=count-n;i++)
	{
		node=node->next;
	}
	cout<<node->data;
}
int main()
{
	Node* head=NULL;
	push(&head,10);
	push(&head,20);
	push(&head,30);
	push(&head,40);
	push(&head,50);
	int n;
	cout<<"Enter node no.:";
	cin>>n;
	findNode(head,n);
	return 0;
}
