//Question Link: https://practice.geeksforgeeks.org/problems/at-least-two-greater-elements4625/1

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here
        sort(a, a + n);
        vector<int> v;
        for (int i = 0; i < (n - 2); i++)
        {
            v.push_back(a[i]);
        }
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        vector<int> res = ob.findElements(a, n);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
} // } Driver Code Ends
