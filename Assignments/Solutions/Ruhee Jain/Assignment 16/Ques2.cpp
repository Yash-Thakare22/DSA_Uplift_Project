/*

Ques2

https://leetcode.com/problems/palindrome-linked-list/

*/

class Solution {
public:
   bool isPalindrome(ListNode* head) {
	ListNode *slow = head, *fast = head, *prev = NULL, *tmp;
	while(fast && fast -> next){
       fast = fast -> next -> next;
	   tmp = slow -> next;
       slow -> next = prev;
       prev = slow;
       slow = tmp; 
    }
	           
	slow = (fast ? slow -> next : slow);
	while(slow) 
		if(slow -> val != prev -> val) 
            return false;
		else slow = slow -> next, prev = prev -> next;
	return true;
}
};


