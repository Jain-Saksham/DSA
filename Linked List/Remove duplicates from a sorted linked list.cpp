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
	Node* new_node= new Node();
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}
void printList(Node* node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node=node->next;
	}
}
void removeDuplicates(Node* node)
{
	Node* current=node;
	Node* next_next;
	if(current==NULL)
	{
		return;
	}
	while(current->next!=NULL)
	{
		if(current==current->next)
		{
			next_next=current->next->next;
			free(current->next);
			current->next=next_next;
		}
		else
		{
			current=current->next;
		}
	}
	printList(current);
}

int main()
{
	Node* head=NULL;
	
	push(&head,11);
	push(&head,11);
	push(&head,22);
	push(&head,33);
	push(&head,33);
	push(&head,44);
	push(&head,55);
	
	removeDuplicates(head);
	
	return 0;
}
