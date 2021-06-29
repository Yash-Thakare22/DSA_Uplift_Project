/*
Question 3
Given an integer n, find whether it is a power of 4 or not

I/P:
16

O/P:
Yes
*/
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n)
{
    return (!(n & (n - 1)) && (n % 3 == 1));
}
int main()
{
    int n;
    cin >> n;
    if (isPowerOfFour(n) == 1)
        cout << "TRUE";
    else
        cout << "NO";
    return 0;
}