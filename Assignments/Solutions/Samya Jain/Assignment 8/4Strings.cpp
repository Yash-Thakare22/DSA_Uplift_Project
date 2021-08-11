//https://practice.geeksforgeeks.org/problems/remove-spaces0128/1


 // } Driver Code Ends

class Solution
{
  public:
    string modify (string s)
    {
        string newstr = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ')
                continue;
            else
                newstr += s[i];
        }
        return newstr;
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
  // } Driver Code Ends
