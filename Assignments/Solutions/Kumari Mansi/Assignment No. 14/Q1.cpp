//   https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1/?track=DSASP-LinkedList&batchId=154
class Solution
{
public:
    //Function to count nodes of a linked list.
    int getCount(struct Node *head)
    {
        int count = 0;

        while (head != NULL)
        {
            count++;
            head = head->next;
        }
        return count;

        //Code here
    }
};