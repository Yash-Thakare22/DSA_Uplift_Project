#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n = 4;
    int s, x, y;

    for(x = 0; x <= n; x++)
    {
        for(s = n; s > x; s--)
            cout << " ";
        for(y = 0; y < x; y++)
            cout << "* ";
        cout << endl;
    }
    for(x = 1; x < n; x++)
    {
        for(s = 0; s < x; s++)
            cout << " ";
        for(y = n; y > x;  y--)
            cout << "* ";
    cout << endl;
    }
    
    return 0;
}