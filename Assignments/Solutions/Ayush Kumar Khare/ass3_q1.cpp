#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Principal Diagonal: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i][i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << endl
         << "Secondary Diagonal : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i][(n - 1) - i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << endl;
    return 0;
}
