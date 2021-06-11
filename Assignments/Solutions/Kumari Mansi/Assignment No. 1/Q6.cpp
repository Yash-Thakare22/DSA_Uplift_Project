/*
Question 6.
54321
5432
543
54
5
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter no. of rows=";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
            cout << j;
        cout << endl;
    }
    return 0;
}