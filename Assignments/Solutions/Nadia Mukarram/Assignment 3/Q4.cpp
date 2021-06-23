//Rotating the array by 180 degrees
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)

            cin >> a[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            int t = a[i][start];
            a[i][start] = a[n - i - 1][end];
            a[n - i - 1][end] = t;
            start++;
            end--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//Time-Complexity-O(n^2)  Space-Complexity-O(1)
