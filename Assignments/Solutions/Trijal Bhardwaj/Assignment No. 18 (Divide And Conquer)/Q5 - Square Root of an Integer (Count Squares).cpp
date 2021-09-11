// Question Link: https://www.geeksforgeeks.org/square-root-of-an-integer/

// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int countSquares(int N) {
        int c = 0;
        for (int i = 1; i < sqrt(N); i++) {
            if (i * i < N)
                c++;
        }
        return c;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
