// Question Link : https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
// Number of SubSets & Mean - https://practice.geeksforgeeks.org/problems/number-of-subsets-and-mean1225/1

// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long power(long long a,long long b) {
        long long mod = 1e9+7;
        long long res = 1;
        while(b>0) {
            if(b&1) res = ((res%mod)*(a%mod))%mod;
            b = b>>1;
            a = ((a%mod)*(a%mod))%mod;
        }
        return res;
    }
    vector<long long> numOfSubsets(int Arr[], int N) {
        // code here
        int maxx=INT_MIN,minn=INT_MAX;
        for(int i=0; i<N; i++) {
            maxx = max(maxx,Arr[i]);
            minn = min(minn,Arr[i]);
        }
        long long c1=0,c2=0;
        for(int i=0; i<N; i++) {
            if(Arr[i] == maxx) c1++;
            if(Arr[i] == minn) c2++;
        }

        vector<long long> v;
        v.reserve(2);
        v.push_back(power(2,c1)-1);
        v.push_back(power(2,c2)-1);
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;
        int Arr[N];
        for(int i=0; i<N; i++)
            cin>>Arr[i];

        Solution ob;
        vector<long long> ptr = ob.numOfSubsets(Arr,N);
        cout<<ptr[0]<<" "<<ptr[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends


/* Iterative Function to calculate (x^y) in O(log y) */
int power(int x, int y) {
    // Initialize answer
    int res = 1;
    // Check till the number becomes zero
    while (y) {
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
        // y = y/2
        y = y >> 1;
        // Change x to x^2
        x = (x * x);
    }
    return res;
}


// Iterative C++ program to compute modular power
#include <iostream>
using namespace std;
/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(long long x, unsigned int y, int p) {
    int res = 1;     // Initialize result
    x = x % p; // Update x if it is more than or equal to p
    if (x == 0) return 0; // In case x is divisible by p;
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
// Driver code
int main() {
    int x = 2;
    int y = 5;
    int p = 13;
    cout << "Power is " << power(x, y, p);
    return 0;
}


// Recursive C++ program to compute modular power
#include <bits/stdc++.h>
using namespace std;
int exponentMod(int A, int B, int C) {
    // Base cases
    if (A == 0)
        return 0;
    if (B == 0)
        return 1;
    // If B is even
    long y;
    if (B % 2 == 0) {
        y = exponentMod(A, B / 2, C);
        y = (y * y) % C;
    }
    // If B is odd
    else {
        y = A % C;
        y = (y * exponentMod(A, B - 1, C) % C) % C;
    }
    return (int)((y + C) % C);
}
// Driver code
int main() {
    int A = 2, B = 5, C = 13;
    cout << "Power is " << exponentMod(A, B, C);
    return 0;
}
