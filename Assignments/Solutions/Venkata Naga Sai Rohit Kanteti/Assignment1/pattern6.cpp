
/*

54321
5432
543
54
5



*/

#include <bits/stdc++.h>
using namespace std;
void read_write()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    read_write();

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