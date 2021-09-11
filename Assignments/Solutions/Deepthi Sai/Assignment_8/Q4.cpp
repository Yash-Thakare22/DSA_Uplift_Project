class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        int c=0;
        for(int i=0;s[i];i++)
         if(s[i]!=' ')
         s[c++]=s[i];
        return s.substr(0,c);
    }
};
