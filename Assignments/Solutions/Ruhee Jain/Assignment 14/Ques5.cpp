/*

Ques5


https://practice.geeksforgeeks.org/problems/identical-linked-lists/1/?track=DSASP-LinkedList&batchId=154

*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

bool areIdentical(struct Node *a, struct Node *b);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n1, n2, tmp , d1 , d2;
        struct Node *head1 = NULL , *tail1=NULL;
        struct Node *head2 = NULL , *tail2 =NULL;
        cin>>n1;
        cin>>d1;
        head1 = new Node(d1);
        tail1 = head1;
        while(n1-- > 1){
            cin>>tmp;
            tail1->next = new Node(tmp);
            tail1 = tail1->next;
        }
        cin>>n2;
        cin>>d2;
        head2 = new Node(d2);
        tail2 = head2;
        while(n2-- >1)
        {
            cin>>tmp;
            tail2->next = new Node(tmp);
            tail2 = tail2->next;
        }
        areIdentical(head1, head2)?cout<<"Identical"<<endl:cout<<"Not identical"<<endl;
    }
	return 0;
}


bool areIdentical(struct Node *head1, struct Node *head2)
{
    if(!head1 || !head2){
        return false;
    }
    int count1=0;
    int count2=0;
    Node* curr1=head1;
    Node* curr2=head2;
    while(curr1!=NULL){
        curr1=curr1->next;
        count1++;
    }
    while(curr2!=NULL){
        curr2=curr2->next;
        count2++;
    }
    if(count1!=count2){
        return false;
    }
    else {
        while(head1!=NULL && head2!=NULL){
            if(head1->data!=head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        return true;
    }
    return false;
    
}
