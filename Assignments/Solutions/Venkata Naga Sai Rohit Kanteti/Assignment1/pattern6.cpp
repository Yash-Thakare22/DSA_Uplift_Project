
/*

54321
5432
543
54
5



*/

#include <bits/stdc++.h>
using namespace std;
int main()
{


    int i, j, k, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
