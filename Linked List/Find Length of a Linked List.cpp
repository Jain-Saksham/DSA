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
void findLength(Node* node)
{
	int count=0;
	while(node!=NULL)
	{
		count++;
		node=node->next;
	}
	cout<<count;
}
int main()
{
	Node* head=NULL;
	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);
	findLength(head);
	return 0;
}
