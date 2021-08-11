#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

unsigned int FirstSetBit(int x)
{

    return log2(x & -x) + 1;
}
int main()
{
    int x;
    cin >> x;
    cout << FirstSetBit(x);

    return 0;
}
