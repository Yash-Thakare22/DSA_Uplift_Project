#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << (log2(x & -x) + 1);

    return 0;
}
