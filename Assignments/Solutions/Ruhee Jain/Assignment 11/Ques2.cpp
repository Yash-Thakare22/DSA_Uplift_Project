/*

Ques2

https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/?track=DSASP-Arrays&batchId=154

*/


#include <iostream>
using namespace std;

class Solution{
    public:

    int equilibriumPoint(long long a[], int n) {
        int sum = 0; 
        int lsum=0;
    for (int i = 0; i < n; ++i)
        sum += a[i];
 
    for (int i = 0; i < n; ++i)
    {
        sum -= a[i]; 
 
        if (lsum == sum)
            return i+1;
 
        lsum += a[i];
    }

    return -1;
    }

};

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
