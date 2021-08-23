class Solution {
public:
    bool isValid(string s) {
        
        int i=0;
        string str;
        stack<char> stack;
     /*   if(s[i]=='{' ||s[i]=='(' ||s[i]=='[')
        {
            stack.push(s[i]);
        }
    */
        
        while(s[i])
        {
             if(s[i]=='{' ||s[i]=='(' ||s[i]=='[')
             stack.push(s[i]);
    
            else if(stack.size()!=0)
            {
                if(stack.top()=='{' && s[i]=='}')
                stack.pop();
            
             else if(stack.top()=='(' && s[i]==')')
                stack.pop();
            
             else if(stack.top()=='[' && s[i]==']')
                stack.pop();
            
            else 
                break;
            }
            
            else
                stack.push(s[i]);
            
            i++;
        }
        
        
        if(stack.size()==0)
            return true;
        
        else return false;
    }
};
