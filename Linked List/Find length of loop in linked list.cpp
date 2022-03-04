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
void findLoopLength(Node* node)
{
	int count=1;
	bool flag=false;
	Node* temp;
	Node* slow=node;
	Node* fast=node;
	while(fast!=NULL&&fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			temp=slow;
			flag=true;
			break;
		}
	}
	if(flag)
	{
		cout<<"Length of Loop=";
		while(temp->next!=slow)
		{
			count++;
			temp=temp->next;
		}
		cout<<count;
	}
	else
	{
		cout<<"No Loop!!";
	}
}
int main()
{
	Node* head=NULL;
	
	push(&head,11);
	push(&head,22);
	push(&head,33);
	push(&head,44);
	push(&head,55);
	
	//head->next->next->next->next->next=head;
	
	findLoopLength(head);
	return 0;
}
