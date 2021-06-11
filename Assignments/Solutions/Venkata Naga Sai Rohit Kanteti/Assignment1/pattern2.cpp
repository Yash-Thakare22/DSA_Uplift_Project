
/*

* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *


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

   

    int i, j, rows,n;
    // cout<<"Please enter the number of rows\n";
    cin >> n ;
    rows = n/2;

    for (i = 1; i <= rows; i++)
    {
        for (j = i; j <= rows; j++)
        {
            cout << "* ";
        }

        for (j = 1; j <= (2 * i - 2); j++)
        {
            cout << "  ";
        }
        for (j = i; j <= rows; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        for (j = (2 * i - 2); j < (2 * rows - 2); j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
