Node* deleteNode(Node *head,int x)
{
   Node* prev = head;
    if(x==1)
    {
        head = head->next;
        free(prev);
        return head;
    }
    int i = x-1;
    while(--i)
    {
        prev=prev->next;
    }
    Node* curr = prev->next;
    prev->next = prev->next->next;
    free(curr);
    return head; 
}
