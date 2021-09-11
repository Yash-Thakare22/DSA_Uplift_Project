#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    cout << "Enter array elements in sorted non-increasing order :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != 1 && a[i] != 0)
        {
            cout << "Invalid input";
            return -1;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << "count:" << count;

    return 0;
}
