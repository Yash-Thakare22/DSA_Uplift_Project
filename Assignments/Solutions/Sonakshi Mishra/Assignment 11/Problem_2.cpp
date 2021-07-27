// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
      //We store the sum of all array elements.
        long long sum = 0;
        for (int i = 0; i < n; i++) 
           sum += a[i];
    
        //sum2 is used to store prefix sum.
        long long sum2 = 0;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            
            //Leaving out the value of current element from suffix sum.
            sum = sum - a[i];
            
            //Checking if suffix and prefix sums are same.
            if (sum2 == sum) {
                //returning the index or equilibrium point.
                return (i + 1);
            }
            
            //Adding the value of current element to prefix sum.
            sum2 = sum2 + a[i];
        }
        return -1;
    
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
