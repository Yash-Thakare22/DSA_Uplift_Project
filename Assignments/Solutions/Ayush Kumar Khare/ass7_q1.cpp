#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int j, key = arr[i];
        for (j = i - 1; j >= 0 && key < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
    int i;
    for (i = 0; i < n;)
    {
        if ((i + 1) >= n || (i + 2) >= n)
        {
            cout << arr[i] << endl;
            return 0;
        }
        if (arr[i] != arr[i + 1] || arr[i] != arr[i + 2])
        {
            cout << arr[i] << endl;
            return 0;
        }
        else            
            i+=3;
            
    }

    if ((i - 1) == n || (i - 2) == n)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
