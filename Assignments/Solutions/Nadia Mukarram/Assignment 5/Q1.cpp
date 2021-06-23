#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 1)
        {
            j++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    return 0;
}
