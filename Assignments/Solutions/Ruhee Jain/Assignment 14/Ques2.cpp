/*

Ques2

https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1/?track=DSASP-LinkedList&batchId=154

*/


#include <bits/stdc++.h> 
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
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 


class Solution{
  public:
 
    Node *insertAtBegining(Node *head, int x) {
        
       if(!head){
           return new Node(x);
       }
      Node* temp= new Node(x);
      temp->next=head;
      return temp;
   
    }
   
    Node *insertAtEnd(Node *head, int x)  {
        if(!head){
            return new Node(x);
        }
        Node* temp = head;
      while(head->next!=NULL){
          head=head->next;
          
      }
      head->next=new Node(x);
      return temp;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data); 
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 

