#include <iostream>
using namespace std;
int main()
{
    int n=4,i,j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << j << " ";

        for (j = 2 * (n - i); j > 1; j--)
            cout << " ";

        for (j = 2 * (n - i); j > 1; j--)
            cout << " ";

        for (j = i; j >= 1; j--)
        {
            if (j == n)
                continue;
            else
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}