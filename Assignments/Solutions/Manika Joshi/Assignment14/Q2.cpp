class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node *ptr= new Node(x);
          if(head ==NULL) return ptr;
      
           ptr->next=head;
           head=ptr;
           
           return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node *ptr= new Node(x);
       
       if(head ==NULL) return ptr;
       
       Node *temp=head;
       while(temp!=NULL)
       {
            if(temp->next==NULL)
          {
              temp->next=ptr;
              ptr->next=NULL;
             return head;
          }
          temp=temp->next;
       }
       return head;
       
    }
};
