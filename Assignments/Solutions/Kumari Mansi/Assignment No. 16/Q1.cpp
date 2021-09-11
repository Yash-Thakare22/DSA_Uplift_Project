//   Q1. https://leetcode.com/problems/valid-parentheses/
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                    return false;
                if (s[i] == '}')
                {
                    if (st.top() != '{')
                        return false;
                    else
                        st.pop();
                }
                if (s[i] == ']')
                {
                    if (st.top() != '[')
                        return false;
                    else
                        st.pop();
                }
                if (s[i] == ')')
                {
                    if (st.top() != '(')
                        return false;
                    else
                        st.pop();
                }
            }
        }
        if (st.size())
            return false;
        return true;
    }
};