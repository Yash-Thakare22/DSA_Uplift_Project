// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string modify (string s)
  
   {
        int n = s.length ();
        int i = 0, itr = 0;
    
        while (i < n)
        {
            if (s[i] != ' ') s[itr++] = s[i];
            i++;
        }
        return s.substr (0, itr);
    }
};
   
   
// { Driver Code Starts.
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

// Contributed By: Pranay Bansal
  // } Driver Code Ends