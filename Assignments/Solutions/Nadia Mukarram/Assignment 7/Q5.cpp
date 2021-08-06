#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int AddOne(int x)
{
    int m = 1;
    while (x & m)
    {
        x = x ^ m;
        m <<= 1;
    }
    x = x ^ m;
    return x;
}
int main()
{
    int x;
    cin >> x;
    cout << AddOne(x);

    return 0;
}
