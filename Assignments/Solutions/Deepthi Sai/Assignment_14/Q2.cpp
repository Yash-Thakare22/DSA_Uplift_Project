class Solution{
  public:
    
    Node *insertAtBegining(Node *head, int x) {
       if(head==NULL)
     {
       Node* new_node= new Node(x);
       head=new_node;
       return head;  
     }
       	 Node* new_node= new Node(x);
         new_node->next=head;
         head=new_node;
         return head;
       
    }
    
    Node *insertAtEnd(Node *head, int x)  {
     if(head==NULL)
     {
       Node* new_node= new Node(x);
       head=new_node;
       return head;  
     }
	Node*ptr=head;
		
	while(ptr->next!=NULL)
	{
	    ptr=ptr->next;
	}
	Node* new_node= new Node(x);
    ptr->next=new_node;
    return head;

    }
};
