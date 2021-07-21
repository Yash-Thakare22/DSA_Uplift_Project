int length(Node*head)
{
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
    return c;
}

Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	Node*temp=head;
	int l=length(head);
	int i = ((l % 2) == 0) ? (l / 2) :(l + 1) / 2;
	while(i-- >1)
	{
	  temp=temp->next;
	}
	Node*new_node= new Node(x);
	new_node->next=temp->next;
	temp->next=new_node;
	return head;
}
