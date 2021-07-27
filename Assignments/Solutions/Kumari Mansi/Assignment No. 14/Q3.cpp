//  https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1
Node *deleteNode(Node *head, int x)
{
    if (x == 1)
    {
        return head->next;
    }

    Node *curr = head->next, *prev = head;
    int pos = 2;
    while (curr != NULL)
    {
        if (pos == x)
        {
            prev->next = curr->next;

            break;
        }

        pos++;
        prev = curr;
        curr = curr->next;
    }

    return head;
    //Your code here
}