// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends

class Solution
{
  public:
    string modify(string s)
    {
        int length = s.length(); 
        int cnt = count(s.begin(), s.end(), ' '); 
        
        remove(s.begin(), s.end(), ' ');
        s.resize(length - cnt); 
        
        return s;
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
