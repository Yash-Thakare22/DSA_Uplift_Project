// https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1/?track=DSASP-LinkedList&batchId=154
class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        int c=0;
        while(head!= NULL){
            c++;
            head = head->next;
        }return c;
    
    }
};
    

