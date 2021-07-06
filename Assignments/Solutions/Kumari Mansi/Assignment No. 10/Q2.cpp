/*Question 2
https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/
*/
#include <bits/stdc++.h>
using namespace std;

int minimum(int a[], int n)
{
    if (n == 1)
        return a[n - 1];
    return (min(a[n - 1], minimum(a, n - 1)));
}
int maximum(int a[], int n)
{
    if (n == 1)
        return a[n - 1];
    return max(a[n - 1], maximum(a, n - 1));
}
int main()
{
    int element, i = 0, n;
    cin >> n;
    int a[n];
    while (cin >> element)
    {
        a[i] = element;
        i++;
    }
    int p = minimum(a, n);
    int q = maximum(a, n);
    cout << "The minimum number of the array is " << p << " The maximum number of this array is " << q;
    return 0;
}