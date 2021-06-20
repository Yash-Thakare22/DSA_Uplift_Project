#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (i = 0; i < 3; i++)
    {
        int j = 0, k = 2;
        while (j < k)
        {
            int t;
            t = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = t;
            j++;
            k--;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}