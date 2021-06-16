#include <iostream>
using namespace std;

int main()
{
    int x;
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int a[n];
    cout << "Enter the elements of array :";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the element to serach :";
    cin >> x;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << i;
            break;
        }
    }
    if (i == 8)
        cout << "Not found";
    return 0;
}