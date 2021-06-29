/*
Question3: 
Given a M*N matrix, print the matrix in spiral order
Input:
 
[  1   2   3   4  5 ]
[ 16  17  18  19  6 ]
[ 15  24  25  20  7 ]
[ 14  23  22  21  8 ]
[ 13  12  11  10  9 ]
 
Output:
 
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
*/
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k = 0;
    int l = 0;
    while (k < m && l < n)
    {
        for (int i = l; i < m; i++)
        {
            cout << arr[k][i] << " ";
        }
        k++;

        for (int i = k; i < n; i++)
        {
            cout << arr[i][n - 1] << " ";
        }
        n--;

        if (k < m)
        {
            for (int i = n - 1; i >= l; i--)
            {
                cout << arr[m - 1][i] << " ";
            }
            m--;
        }

        if (l < n)
        {
            for (int i = m - 1; i >= k; i--)
            {
                cout << arr[i][l] << " ";
            }
            l++;
        }
    }
    return 0;
}