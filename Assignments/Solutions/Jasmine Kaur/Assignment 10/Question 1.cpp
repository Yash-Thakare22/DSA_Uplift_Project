#include<bits/stdc++.h>
using namespace std;


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
} 
