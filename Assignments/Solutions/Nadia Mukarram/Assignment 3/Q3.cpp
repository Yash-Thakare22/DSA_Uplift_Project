//Spiral Order Printing
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

            cin >> a[i][j];
    }
    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        //first row
        for (int col = column_start; col <= column_end; col++)
            cout << a[row_start][col] << " ";
        row_start++;
        for (int row = row_start; row <= row_end; row++)
            cout << a[row][column_end] << " ";
        column_end--;
        for (int col = column_end; col >= column_start; col--)
            cout << a[row_end][col] << " ";
        row_end--;
        for (int row = row_end; row >= row_start; row--)
            cout << a[row][column_start] << " ";
        column_start++;
    }

    return 0;
}
