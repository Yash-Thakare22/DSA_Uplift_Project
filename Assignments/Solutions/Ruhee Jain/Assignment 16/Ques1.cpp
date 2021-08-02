/*

Ques1

https://leetcode.com/problems/valid-parentheses/

*/

class Solution {
public:
    bool isValid(string s) {
     stack<char> st;
        char x;
        for (int i=0; i<s.length(); i++){
           if(s[i]=='(' || s[i]=='{' || s[i]=='[')
           {
               st.push(s[i]);
               continue;
           }  
           if (st.empty())
                  return false;
           
            if(s[i]==')' && st.top()=='('){
                    st.pop();
            }
            else if(s[i]=='}' && st.top()=='{'){
                st.pop();
            }
            else if(s[i]==']' && st.top()=='['){
                st.pop();
            }  
            else 
                return false;
    }
        return (st.empty());
       
    }
};
