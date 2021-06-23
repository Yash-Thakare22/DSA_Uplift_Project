#include <iostream>

using namespace std;
int BinarySearch(int a[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (x == a[mid])
        {
            return mid;
        }
        else if (x < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    cout << "Enter array elements in sorted order :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "Enter the element to be found :";
    cin >> x;
    int r = BinarySearch(a, n, x);
    if (r == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at position:" << r;
    }

    return 0;
}
