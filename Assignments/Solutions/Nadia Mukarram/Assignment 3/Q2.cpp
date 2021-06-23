//Reversing the rows of the array
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)

            cin >> a[i][j];
    }

    for (int i = 0; i < m; i++)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            int t = a[i][start];
            a[i][start] = a[i][end];
            a[i][end] = t;
            start++;
            end--;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//Time-Complexity-O(n*m)  Space-Complexity-O(1)
