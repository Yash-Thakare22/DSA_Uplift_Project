#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];
    cout << "Enter"
         << " " << n << " Numbers :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x = arr[n - 1];
    for (i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = x;

    cout << "Element of array after rearranging :" << endl;

    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}