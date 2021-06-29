// Question Link: https://practice.geeksforgeeks.org/problems/remove-spaces0128/1

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string modify(string s)
    {
        string s2 = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                s2 += s[i];
            }
        }
        return s2;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.modify(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
