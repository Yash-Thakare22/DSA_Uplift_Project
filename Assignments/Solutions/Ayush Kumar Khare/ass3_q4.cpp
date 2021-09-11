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
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp1 = (n - 1) - i;
            int temp2 = (n - 1) - j;
            arr[i][j] = arr[i][j] + arr[temp1][temp2];
            arr[temp1][temp2] = arr[i][j] - arr[temp1][temp2];
            arr[i][j] = arr[i][j] - arr[temp1][temp2];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
