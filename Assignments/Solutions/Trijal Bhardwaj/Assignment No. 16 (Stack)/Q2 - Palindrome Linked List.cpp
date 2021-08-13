// Question Link: https://leetcode.com/problems/palindrome-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
  public:
    bool isPalindrome(ListNode* head) {
        stack<int>start;
        queue<int>end;
        ListNode* curr = head;
        while (curr != NULL) {
            start.push(curr->val);
            end.push(curr->val);
            curr = curr->next;
        }
        while (!start.empty()  && !end.empty()) {
            if (start.top() != end.front()) return false;
            start.pop(), end.pop();
        }
        return true;
    }
};
