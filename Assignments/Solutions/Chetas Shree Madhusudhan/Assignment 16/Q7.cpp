// https://leetcode.com/problems/backspace-string-compare/
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>s1,t1;
        for(int i=0;i<s.length();i++){
            if(s[i] == '#' && !s1.empty()) s1.pop();   
            else if(s[i] == '#' && s1.empty()) continue ;
            else  s1.push(s[i]);               
        }
        for(int i=0;i<t.length();i++){
            if(t[i] == '#' && !t1.empty()) t1.pop(); 
            else if(t[i] == '#' && t1.empty()) continue ;
            else t1.push(t[i]);                     
        }
     
        while(!s1.empty() && !t1.empty() && s1.top() == t1.top()){
            s1.pop();
            t1.pop();
        }if(s1.empty() && t1.empty()) return true;        
        return false; 
        
    }
};