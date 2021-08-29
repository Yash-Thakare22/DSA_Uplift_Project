Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node *n=head;
    int count=0;
      if(x==1)
        {
            n=n->next;
            return n;
        }
    while(n!=NULL)
    {
        count++;
        if(count==x-1)
        {
            n->next=n->next->next;
             return head;
        }
        n=n->next;
    }
    
}
