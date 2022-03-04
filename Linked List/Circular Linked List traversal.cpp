#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
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

    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);
    push(&head,50);

    cout<<"Contents of Circular Linked List:";
    printList(head);
    return 0;
}
