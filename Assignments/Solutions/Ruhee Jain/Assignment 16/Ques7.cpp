/*

Ques7

 https://leetcode.com/problems/backspace-string-compare/

*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1,st2;
        char c;
        for(auto c:s)
            {
                 if(c=='#')
                 {
                     if(!st1.empty())
                        st1.pop();
                 }
                else
                    st1.push(c);
            }
            for(auto c:t)
            {
                 if(c=='#')
                 {
                     if(!st2.empty())
                        st2.pop();
                 }
                else
                    st2.push(c);
            }
            while(!(st1.empty()||st2.empty()))
            {
                    if(st1.top()==st2.top())
                    {
                        st1.pop();
                        st2.pop();
                    }
                    else
                        return false;
            }
        if(!(st1.empty()&&st2.empty()))
            return false;
        else
            return true;
    }
};


//Another Aproach found and implemented

//Two pointer approach

class Solution {
public:
     bool backspaceCompare(string s, string t) {
        int i = 0;
        int idx1 = 0, idx2 = 0;
        while (i < s.size()) {
            if (s[i] == '#') {
                idx1--;
                if (idx1 < 0) idx1 = 0;
            } else {
                s[idx1] = s[i];
                idx1++;
            }
            i++;
        }
        
        i = 0;
        while (i < t.size()) {
            if (t[i] == '#') {
                idx2--;
                if (idx2 < 0) idx2 = 0;
            } else {
                t[idx2] = t[i];
                idx2++;
            }
            i++;
        }
        
        if (idx1 != idx2) return false;
        
        for (int i = 0; i < idx1; i++) 
            if (s[i] != t[i]) return false;

        return true;
    }
};

