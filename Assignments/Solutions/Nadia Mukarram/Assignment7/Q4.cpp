#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int Multiply(int x)
{
    /*(3.5*x)=2*x + x +x/2 */
    return ((x << 1) + x + (x >> 1));
}
int main()
{
    int x;
    cin >> x;
    cout << Multiply(x);

    return 0;
}
