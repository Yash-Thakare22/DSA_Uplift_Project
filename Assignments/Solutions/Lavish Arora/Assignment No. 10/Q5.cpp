#include <bits/stdc++.h>
using namespace std;
 

bool isPrime(int n,int base=2)
{ 
    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % base == 0)
        return false;
    if (base * base > n)
        return true;
 
    return isPrime(n, base + 1);
}

int main()
{
    int n;
    cin>>n;
    if (isPrime(n))
        cout << "Yes";
    else
        cout << "No";
 
    return 0;
}
 

