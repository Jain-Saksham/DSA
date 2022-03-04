#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int data)
{
    Node* newNode = new Node();
    
}
int main()
{
    Node* root=createNode(10);
    root->left=createNode(11);
    root->left->left=createNode(7);
    root->right==createNode(9);
    root->right->left==createNode(15);
    root->right->right==createNode(8);

    cout<<"Inorder traversal before insertion"<<endl;
    inorder(root);
    cout<<endl;
    
    cout << "Inorder traversal after insertion: ";
    inorder(root);
    cout << endl;
 
    return 0;
}