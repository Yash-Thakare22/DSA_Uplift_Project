#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        string m="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ') 
              continue;
            else m+=s[i];
        }
      return m;
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}
