/*
Question5:
    1           1
    1 2       2 1
    1 2 3   3 2 1
    1 2 3 4 3 2 1
*/

#include <iostream>
using namespace std;
int main()
{
    int i, j, n=4;

    for (i = 1; i <= n; i++)
    {
        // print number in increasing order
        for (j = 1; j <= i; j++)
            cout << j << " ";

        // print spaces in decreasing order
        for (j = 2 * (n - i); j > 1; j--)
            cout << " ";

        // print spaces in decreasing order*
        for (j = 2 * (n - i); j > 1; j--)
            cout << " ";

        // print numbers in increasing rev order
        for (j = i; j >= 1; j--)
        {
            if (j == n)
                continue;
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}