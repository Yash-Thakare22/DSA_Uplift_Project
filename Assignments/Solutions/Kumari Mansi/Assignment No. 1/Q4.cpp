/*
Question 4.
     *
    * *
   * * *
    * *
     *
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << " Enter no. of rows for one of the triangle: ";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}