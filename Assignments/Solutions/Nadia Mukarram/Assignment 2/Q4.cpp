#include <iostream>
#include <bits/stdc++.h>

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
    int maxsum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += a[i];

        if (sum > maxsum)
        {

            maxsum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << maxsum;

    return 0;
}
