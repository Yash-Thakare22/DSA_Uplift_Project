#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Enter the size of array :";
    cin >> n;
    int a[n];
    cout << "Enter the elements of array :";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the No. :";
    cin >> x;
    int c = -1, j;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            j = i;
            ++c;
        }
    }
    cout << j - c;
    return 0;
}