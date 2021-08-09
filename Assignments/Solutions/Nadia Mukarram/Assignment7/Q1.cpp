#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int FrequencyOne(int a[], int n)
{
    int ones = 0, twos = 0, common_bit_mask;
    for (int i = 0; i < n; i++)
    {
        twos = twos | (ones & a[i]);
        ones = ones ^ a[i];
        common_bit_mask = ~(ones & twos);
        ones &= common_bit_mask;
        twos &= common_bit_mask;
    }
    return ones;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << FrequencyOne(a, n);

    return 0;
}
