#include <iostream>
#include <stdbool.h>
using namespace std;

bool binary_search(int key, int arr[], int l, int h)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == key)
            return true;
        else if (arr[mid] > key)
            return binary_search(key, arr, l, mid - 1);
        else
            return binary_search(key, arr, mid + 1, h);
    }
    return false;
}

int main()
{
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool index = binary_search(key, arr, 0, n - 1);
    cout << index << endl;
    return 0;
}
