#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
void splitList(Node *head,Node **head1_ref,Node **head2_ref)
{
	Node* slow=head;
	Node* fast=head;
	if(head==NULL)
	{
		return ;
	}	
	while(fast->next!=NULL&&fast->next->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	if(fast->next->next==head)
	{
		fast=fast->next;
	}
	*head1_ref=head;
	if(head->next!=head)
	{
		*head2_ref=slow->next;
	}
	fast->next=slow->next;
	slow->next=head;
}
void push(Node** head_ref,int new_data)
{
    Node *new_node=new Node();
    new_node->data=new_data;
    Node *temp=*head_ref;
    new_node->next=*head_ref;

    if(*head_ref!=NULL)
    {
        while(temp->next!=*head_ref)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
    else
    {
        new_node->next=new_node;
    }
    *head_ref=new_node;
}
void printList(Node *head)
{
	Node *temp=head;
	if(head!=NULL)
	{
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head); 
	}
}
int main()
{
    Node *head=NULL;
    Node *head1=NULL;
    Node *head2=NULL;

    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);

    cout<<"Original Circular Linked List:";
    printList(head);
    
    splitList(head,&head1,&head2);
    cout<<"First Circular Linked List:";
    printList(head1);
    cout<<"Second Circular Linked List:";
    printList(head2);
    
    return 0;
}
