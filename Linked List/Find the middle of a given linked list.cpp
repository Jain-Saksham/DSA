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
void findMid(Node* node)
{
	struct Node *slow=node;
	struct Node *fast=node;
	while(fast!=NULL&& fast->next != NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	cout<<"Middle elements is:"<<slow->data;
}
int main()
{
	Node* head=NULL;
	push(&head,10);
	push(&head,20);
	push(&head,30);
	push(&head,40);
	push(&head,50);
	findMid(head);
	return 0;
}
