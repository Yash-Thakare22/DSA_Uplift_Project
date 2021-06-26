/* Question 1
Given an i/p array where every element occurs three times, except one element which occurs only once . Find that element

I/P:
4 3 5 5 4 4 5

O/P:
3
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i, one = 0, s = 0, two = 0;
    for (int i = 0; i < n; i++)
    {

        two = two | (one & arr[i]);
        one = one ^ arr[i];
        s = ~(one & two);
        one &= s;
        two &= s;
    }
    cout << one;
    return 0;
}
