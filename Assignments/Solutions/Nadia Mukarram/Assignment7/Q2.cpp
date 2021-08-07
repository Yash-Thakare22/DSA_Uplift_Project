#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool oppsign(int x, int y)
{
    return ((x ^ y) < 0);
}
int main()
{

    int x, y;
    cin >> x >> y;
    if (oppsign(x, y) == true)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
