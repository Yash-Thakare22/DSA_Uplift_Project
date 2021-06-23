//Question Link: https://practice.geeksforgeeks.org/problems/odd-or-even3618/1

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string oddEven(int N)
    {
        // code here
        if (N & 1)
            return "odd";

        return "even";
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.oddEven(N) << endl;
    }
    return 0;
} // } Driver Code Ends
