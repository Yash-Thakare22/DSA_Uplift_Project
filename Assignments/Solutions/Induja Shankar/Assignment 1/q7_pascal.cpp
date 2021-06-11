#include <bits/stdc++.h>
using namespace std;

int pascal(const int n, const int x)
{
    if(n == 0 || n == 1 || x == 0 || x == n)
        return 1;
    return pascal(n-1, x-1) + pascal(n-1, x);
}

int main()
{   
    int rows = 5;
    
    for(int n = 0; n < rows; ++n) {
        for(int x = 0; x <= n; ++x) {
            cout << pascal(n, x) << " ";
        }
        cout << endl;
    }
    return 0;
}