class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        int l=s.length();
        string b=s;
        for( int i=0;i<l;i++){
            
            
            b[indices[i]]=s[i];
           
        }
        
      return b;  
    }
