// Question Link: https://www.geeksforgeeks.org/program-for-factorial-of-a-number/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int factorial(int N) {
        if(N==1 || N==0) {
            return 1;
        } else {
            return N*factorial(N-1);
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
