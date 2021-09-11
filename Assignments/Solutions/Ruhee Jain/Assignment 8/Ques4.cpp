/*

Ques4

STRINGS: https://practice.geeksforgeeks.org/problems/remove-spaces0128/1


*/


class Solution
{
  public:
    string modify (string s)
    {
        int i=0,j=0;
        while(s[i])
    {
        if(s[i]!=' ')
            s[j++]=s[i];
        i++;
    }
    s[j]='\0';
    return s.substr(0,j);
    }
};
