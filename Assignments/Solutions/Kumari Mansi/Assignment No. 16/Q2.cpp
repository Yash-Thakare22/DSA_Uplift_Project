// Q2:  https://leetcode.com/problems/palindrome-linked-list/
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
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        stack<int> stk;
        ListNode *curr = head;

        while (curr)
        {
            stk.push(curr->val);
            curr = curr->next;
        }

        curr = head;
        while (curr)
        {
            if (curr->val != stk.top())
            {
                return false;
            }
            else
            {
                stk.pop();
                curr = curr->next;
            }
        }

        return true;
    }
};