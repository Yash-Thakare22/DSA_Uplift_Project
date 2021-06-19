#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cout << "Select value of k less than n:";
    cin >> k;
    if (k > n)
    {
        cout << "Invalid input";
        return -1;
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int index = 0;
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[index])
            {
                index = j;
            }
        }
        int t = a[i];
        a[i] = a[index];
        a[index] = t;
    }

    cout << k << "th smallest element is " << a[k - 1];

    return 0;
}
