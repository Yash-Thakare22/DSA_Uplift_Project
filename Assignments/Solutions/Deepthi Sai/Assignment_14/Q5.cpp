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

bool areIdentical(struct Node *head1, struct Node *head2)
{
    if(length(head1)!=length(head2))
    return false;
    int l=length(head1);
    while(l--)
    {
       if(head1->data!=head2->data)
       return false;
       head1=head1->next;head2=head2->next;
    }
    return true;
}
