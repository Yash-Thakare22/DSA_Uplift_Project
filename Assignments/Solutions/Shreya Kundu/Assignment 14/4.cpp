struct Node* insertInMiddle(struct Node* head, int x)
{
    //code here
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data=x;
    n->next=NULL;
    if (head == NULL)
        head= n;
    else {
        struct Node* ptr = head;
        int len = 0;
        while (ptr != NULL) {
            len++;
            ptr = ptr->next;
        }
 
        
        int count = ((len % 2) == 0) ? (len / 2) :(len + 1) / 2;
                                                  
        ptr = head;
 
        
        while (count-- > 1)
            ptr = ptr->next;
 
        n->next = ptr->next;
        ptr->next = n;
    }
    return head;
}
