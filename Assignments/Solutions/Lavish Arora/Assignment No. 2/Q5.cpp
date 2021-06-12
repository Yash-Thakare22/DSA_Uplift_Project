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

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[j];
                return 0;
            }
        }
    }
    cout << "No repeating element present";
    return 0;
}
