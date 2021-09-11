class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<int> stack, st ;
     //   stack <int> st;
        string str1="";
        string str2="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(stack.size()>0)
                {
                    stack.pop();
                    str1.pop_back();
                }
                   
            }
            else 
            {
                stack.push(s[i]);
                str1+=s[i];
            }  
        }
        
       // stack.clear();
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                if(st.size()!=0)
                {
                st.pop();
                str2.pop_back();
                }
                   
            }
            else 
            {
                st.push(t[i]);
                str2+=t[i];
            }  
        }
        
        if(str1==str2)
            return true;
        
        else return false;
                
        
        
        
    }
};
