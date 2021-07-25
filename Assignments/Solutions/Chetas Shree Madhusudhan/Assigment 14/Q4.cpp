// https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1/?track=DSASP-LinkedList&batchId=154
Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	Node *n = new Node(x);
	if(head == NULL) head = n;
	Node *slow = head;
	Node *fast = head->next;
	while(fast && fast->next){
	    slow = slow->next;
	    fast = fast->next->next;
	}n->next = slow->next;
	slow->next = n;
	return head;
}