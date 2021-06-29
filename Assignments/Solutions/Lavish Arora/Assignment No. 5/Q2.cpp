#include <iostream>
using namespace std;
int main()
{
    int i, j, t, n, k;
    cout<<"Enter the size of array :";
    cin >> n;
    cout<<"Enter the Number :";
    cin >> k;
    int a[n];
    int flag;
    cout<<"Enter the elements of array :";
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    for (i = 0; i < n; i++)
        if (i == k - 1)
            cout << a[i] << " ";
    return 0;
}