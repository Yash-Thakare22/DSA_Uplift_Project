// Strings : Remove spaces

class Solution
{
  public:
    string modify (string s)
    {
        string temp;
        string p;
        int i = 0;
        while (s[i] != '\0') {
            if (s[i] == ' ') {
                p += temp;
                temp = "";
            } 
            else {
                temp += s[i];    
            }
            i++;
        }
        p += temp;
        return p;
    }
};