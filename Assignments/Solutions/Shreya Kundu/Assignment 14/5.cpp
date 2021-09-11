bool areIdentical(struct Node *head1, struct Node *head2)
{
	//code here
	struct Node* n1=head1;
	struct Node* n2=head2;
	while(n1!=NULL && n2!=NULL){
	    if(n1->data!=n2->data)
	    return false;
	    n1=n1->next;
	    n2=n2->next;
	}
	if(n1!=NULL || n2!=NULL )
	return false;
	return true;
}
