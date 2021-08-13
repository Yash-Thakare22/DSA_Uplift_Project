//  https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1/?track=DSASP-LinkedList&batchId=154
Node *insertInMiddle(Node *head, int x)
{
    // Cpde here

    Node *tmp1 = new Node(x);
    Node *tmp2 = head;
    int len = 0;
    while (tmp2 != NULL)
    {
        len++;
        tmp2 = tmp2->next;
    }
    int c = ((len % 2) == 0) ? (len / 2) : (len + 1) / 2;
    tmp2 = head;
    while (c-- > 1)
        tmp2 = tmp2->next;
    tmp1->next = tmp2->next;
    tmp2->next = tmp1;
    return head;
}