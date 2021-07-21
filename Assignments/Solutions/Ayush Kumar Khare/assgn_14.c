/*
//quesiton 1

int getCount(struct Node* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head = head->next;
        }
        return count;
            
    }
*/

/*
//quesstion 2

struct Node *insertAtBegining(struct Node *head, int x) {
	//code here
struct	Node* temp;
temp=(struct Node*)malloc(sizeof(struct Node));
       temp->data= x;
       temp->next=head;
       if(!head)
        return temp;
       head=temp;
       return head;
    
}

//Function to insert a node at the end of the linked list.
struct Node *insertAtEnd(struct Node *head, int x)  {

	//code here
struct	Node* temp;
temp=(struct Node*)malloc(sizeof(struct Node));
       temp->data= x;
       temp->next=NULL;
       if(head==NULL)
        return temp;
      struct  Node*ptr=head;
       while(ptr->next)
        ptr=ptr->next;
       ptr->next=temp;
       return head;
}
*/

/*
//Question3

bool areIdentical(struct Node *head1, struct Node *head2)
{
	//code here
	while(head1 && head2)
	{
	    if(head1->data != head2->data)
	    return false;
	    head1=head1->next;
	    head2=head2->next;
	    
	    
	}
	if(head1 )
	    return false;
else if (head2)
    return false;
    else return true;
}
*/

/*
//Question 4
Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	int count=0;
	Node *ptr=head;
	while(ptr)
	{
	    ptr=ptr->next;
	    count++;
	}
	ptr=head;
	for(int i=1;i<count/2;i++)
	    ptr = ptr->next;
	    
	Node*temp= (Node*)malloc(sizeof(Node));
    temp->data=x;
    temp->next=NULL;
   if(count%2==1)
    {
        if(ptr->next)
        {   
            ptr=ptr->next; 
            temp->next= ptr->next;
            ptr->next=temp;
        }
        else
        {
            temp->next= ptr->next;
            ptr->next=temp;
        }
    }
    else
    {
        temp->next= ptr->next;
        ptr->next=temp;
    }    
    return head;
}

*/

/*
//Question 5

Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x==1)
    {
        head=head->next;
        return head;
    }
    Node *ptr= head,*temp=head;
    int count=1;
    while(count!=x)
    {
        temp=ptr;
        ptr=ptr->next;
        count++;
    }
    temp->next=ptr->next;
    return head;
 }
*/
