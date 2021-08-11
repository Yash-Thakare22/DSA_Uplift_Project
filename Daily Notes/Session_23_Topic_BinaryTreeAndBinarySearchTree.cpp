Binary Tree

Binary Tree: A tree whose elements have at most 2 children is called a binary tree. 
Since each element in a binary tree can have only 2 children, we typically name them the left and right child. 
A Tree node contains following parts. 
1. Data 
2. Pointer to left child 
3. Pointer to right child

Traversal
Inorder : Left , Root , Right
Preorder : Root , Left , Right
Postorder : Left , Right , Root


Binary Tree Program

#include <iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};
//Fuction which will create a Node

Node* CreateNode(int data)
{
    Node* newNode = new Node();
    
    //
    if(!newNode )
    {
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//Insertion Function
Node* InsertNode(Node* root , int data)
{
    if (root == NULL)
    {
        root = CreateNode(data);
        return root;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        
        if(temp->left != NULL)
        {
            q.push(temp->left);
        }
        else
        {
            temp->left = CreateNode(data);
            return root;
        }
        if(temp->right != NULL)
        {
            q.push(temp->right);
        }
        else
        {
            temp->right =CreateNode(data);
            return root;
        }
        
    }
}

void inorder(Node* temp)
{
    if(temp == NULL)
    {
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<' ';
    inorder(temp->right);
    
}

void preorder(Node* temp)
{
    if(temp == NULL)
    {
        return;
    }
    cout<<temp->data<<' ';
    preorder(temp->left);
    preorder(temp->right);
}

void postorder(Node* temp)
{
    if(temp == NULL)
    {
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<' ';
}

int main()
{
    Node* root  = CreateNode(10);
    root->left = CreateNode(11);
    root->left->left = CreateNode(7);
    root->left->right = CreateNode(17);
    root->right = CreateNode(9);
    root->right->left = CreateNode(30);
    root->right->right = CreateNode(22);
    cout << "Inorder Traversal before Insertion Fuction  ";
    inorder(root);
    cout<<endl;
    
    cout << "Preorder Traversal before Insertion Fuction  ";
    preorder(root);
    cout<<endl;
    
    cout << "Postorder Traversal before Insertion Fuction  ";
    postorder(root);
    cout<<endl;
    
    int value = 5;
    root = InsertNode(root , value);
    
    cout << "Inorder Traversal after Insertion Fuction  ";
    inorder(root);
    cout<<endl;
    return 0;
}



Binary Search Tree


Binary Search Tree is a node-based binary tree data structure which has the following properties:  

The left subtree of a node contains only nodes with keys lesser than the node’s key.
The right subtree of a node contains only nodes with keys greater than the node’s key.
The left and right subtree each must also be a binary search tree. 
There must be no duplicate nodes.


Binary Search Tree Program

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    
};

Node* createNode(int item)
{
    Node* node = new Node();
    node->data = item;
    node->left = node->right = NULL;
    return node;
}
Node* insertion(Node* root , int item)
{
    if(root == NULL)
    {
        return createNode(item);
        
    }
    if(item < root->data)
    {
        root->left = insertion(root->left , item);
    }
    else // item > root->data
    {
        root->right = insertion(root->right , item);
    }
    return root;
}
void inorder(Node* temp)
{
    if(temp == NULL)
    {
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<' ';
    inorder(temp->right);
    
}
void search(Node* &curr , int item , Node* &parent)
{
    while(curr != NULL && curr->data != item)
    {
        parent = curr;
        if(item <curr->data)
        {
            curr = curr->left;
        }
        else
        {
            curr = curr->right;
        }
    }
}
int main()
{
    Node* root = NULL;
    int key[4];
    for(int i = 0; i < 4; i++)
    {
        cout << "Insert value ";
        cin >> key[i];
        root = insertion(root , key[i]);
    }
    cout<<"Inorder Traversal ";
    inorder(root);
    return 0;
    
}