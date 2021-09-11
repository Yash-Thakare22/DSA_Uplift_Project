// Question Link: https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/

// { Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {

        int s=0,sum=0;
        for(int i=0; i<n; i++)s+=a[i];
        for(int i=0; i<n; i++) {
            if(sum==(s-a[i])*0.5) return i+1;
            if(sum>(s-a[i])*0.5) return -1;
            sum+=a[i];
        }
    }

};

// { Driver Code Starts.


int main() {

    long long t;

    //taking testcases
    cin >> t;

    while (t--) {
        long long n;

        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
