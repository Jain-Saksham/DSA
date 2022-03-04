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
void search(Node* node,int num)
{
	int count=0;
	while(node!=NULL)
	{
		if(node->data==num)
		{
			cout<<"Found";
			count++;
			break;
		}
		node=node->next;
	}
	if(count==0)
	{
		cout<<"Not Found";
	}
}
int main()
{
	Node* head=NULL;
	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);
	int num;
	cout<<"Enter no. to be searched:";
	cin>>num;
	search(head,num);
	return 0;
}
