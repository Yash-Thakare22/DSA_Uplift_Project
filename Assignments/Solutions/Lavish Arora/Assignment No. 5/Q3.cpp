#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j;
    cout<<"Enter the size of array 1 :";
    cin >> n;
    int a[n];
    cout<<"Enter the elements of array 1 :";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout<<"Enter the size of array 2 :";
    cin >> m;
    int b[m];
    cout<<"Enter the elements of array 2 :";
    for (i = 0; i < m; i++)
        cin >> b[i];

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }

    return 0;
}