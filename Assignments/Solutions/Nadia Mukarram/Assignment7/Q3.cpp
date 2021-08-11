#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{

    int n;
    cin >> n;
    if ((n & (n - 1)) == 0 && (n % 3 == 1))
    {
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}
