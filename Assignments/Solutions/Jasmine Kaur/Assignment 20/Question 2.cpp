#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long maximizeEulerRatio(long long n) {
        long long res = 1;
        bool sieve[101];
        memset(sieve,0,sizeof(sieve));
        int i,j;
        for(i=2; i<=100; i++) {
            if(sieve[i]) continue;
            for(j=2*i; j<=100; j+=i) sieve[j] = 1;
            if(res*i<=n) res*=i;
            else break;
        }
        return res;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;

        cin>>N;

        Solution ob;
        cout << ob.maximizeEulerRatio(N) << endl;
    }
    return 0;
}  



#include <iostream>
using namespace std;
// Function to return gcd of a and b
int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int phi(unsigned int n) {
    unsigned int result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}

int main() {
    int n;
    for (n = 1; n <= 10; n++)
        cout << "phi("<<n<<") = " << phi(n) << endl;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int phi(int n) {
  
    float result = n;
    for(int p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
           
            while (n % p == 0)
                n /= p;
            result *= (1.0 - (1.0 / (float)p));
        }
    }

    if (n > 1)
        result *= (1.0 - (1.0 / (float)n));
    return (int)result;
}

int main() {
    int n;
    for(n = 1; n <= 10; n++) {
        cout << "Phi" << "("
             << n << ")" << " = "
             << phi(n) <<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int phi(int n) {
    
    int result = n;
    
    for(int p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
 
    if (n > 1)
        result -= result / n;
    return result;
}

int main() {
    int n;
    for(n = 1; n <= 10; n++) {
        cout << "Phi" << "("
             << n << ")" << " = "
             << phi(n) << endl;
    }
    return 0;
}
