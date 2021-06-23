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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            arr[i][j] = arr[i][j] + arr[i][(n - 1) - j];
            arr[i][(n - 1) - j] = arr[i][j] - arr[i][(n - 1) - j];
            arr[i][j] = arr[i][j] - arr[i][(n - 1) - j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
