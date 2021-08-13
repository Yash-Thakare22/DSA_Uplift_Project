// Question Link: https://leetcode.com/problems/valid-parentheses/

#include <stack>
class Solution {
  public:
    bool isValid(string s) {
        stack<char> t;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                t.push(s[i]);
            } else {
                if (t.size() == 0) {
                    return false;
                } else {
                    if (s[i] == ')' && t.top() == '(') {
                        t.pop();
                    } else if (s[i] == '}' && t.top() == '{') {
                        t.pop();
                    } else if (s[i] == ']' && t.top() == '[') {
                        t.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        if (t.size() == 0) {
            return true;
        }
        return false;
    }
};
