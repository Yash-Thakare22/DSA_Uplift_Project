// https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1/?track=DSASP-LinkedList&batchId=154#
class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node *n = new Node(x);
       if(head ==NULL) return n;
       n->next = head;
       head = n;
       return head;
    }
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node *n = new Node(x);
       if(head ==NULL) return n;
       Node *temp = head;
       while(temp->next != NULL){
           temp = temp->next;
       }temp -> next = n;
       return head;
    }
};