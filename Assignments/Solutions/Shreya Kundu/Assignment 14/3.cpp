Node* deleteNode(Node *head,int x)
{   if(head==NULL)
    return NULL;
    Node* n=head;
    Node*prev=NULL;
    int c=1;
    
    while(c<x && n!=NULL){
          prev->next=n;
          n=n->next;
          c++;
    }
    if (n == NULL)
        return head;
    prev->next=n->next;
    delete n;
    return head;
    //Your code here
}
