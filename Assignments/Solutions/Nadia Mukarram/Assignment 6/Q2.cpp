#include <iostream>

using namespace std;

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
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            cout << i;
            flag = 1;
            break;
        }
    }
    if (flag != 1)
    {
        cout << "Element not found";
    }

    return 0;
}
