/*

Ques3

https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1

*/

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void append(struct Node** head_ref, struct Node **tail_ref,
           int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

struct Node* deleteNode(struct Node *head,int );

void printList(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
   cout << "\n";
}


int main()
{
  int T, i, n, l;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }

	int kk;
	cin>>kk;
    head = deleteNode(head,kk);
    printList(head);
    }
    return 0;
}


Node* deleteNode(Node* head,int x)
{
    if(!head){
        return NULL;
    }
    Node* temp=head;
    if(x==1){
        temp=head->next;
        return temp;
    }
    for(int i=1; temp!=NULL && i<x-1; i++){
        temp=temp->next;
    }
    temp->next= temp->next->next;
    return head;
}

