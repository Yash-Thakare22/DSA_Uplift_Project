struct Node *insertAtBegining(struct Node *head, int x) {
   struct Node *n = (struct Node *)malloc(sizeof(struct Node));  
    
    n->data=x;
    n->next=head;
    head=n;
    return head;
	//code here
}


//Function to insert a node at the end of the linked list.
struct Node *insertAtEnd(struct Node *head, int x)  {
   
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    n1->data=x;
    struct Node* org=(struct Node *)malloc(sizeof(struct Node));
    org=head;
    if(head==NULL)
    head=n1;
    while(org->next!=NULL){
        org=org->next;
    }
    org->next=n1;
    return head;
	//code here
}
