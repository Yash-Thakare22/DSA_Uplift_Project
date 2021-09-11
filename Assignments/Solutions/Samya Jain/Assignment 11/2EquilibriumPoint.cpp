//https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/?track=DSASP-Arrays&batchId=154


#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int s) {
          int sum1 = 0, sum2 = 0;
        for(int i = 0; i < s; i++)
            sum1 += arr[i];
        if(s == 1){
            return 1;
        }
        else if(s == 2){
            return -1;
        }
        else{
            for(int i = 0; i < s - 1; i++){
                if(sum2 == (sum1 - arr[i] - sum2))
                    return (i + 1);
                    sum2 += arr[i];
             }
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
