class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        int n=s.length();
          string b="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                b+="";
            }
            else
            b+=s[i];
            
        }
      return b;  
    }
};
