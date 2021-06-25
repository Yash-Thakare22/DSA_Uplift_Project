class Solution
{
  public:
    string modify (string s)
    {
        int i;
        string ans="";
        //code here.
        for(i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                ans+=s[i];
            }
           
        }
        return ans;
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
