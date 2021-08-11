class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        string s1="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ') continue;
            else s1+=s[i];
        }return s1;
    }
};
