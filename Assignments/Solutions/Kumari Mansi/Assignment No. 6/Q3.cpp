/*Question 3:Given a sorted array of size N and an integer K. Check if K is present in the array or not.
Example 1:
Input:
N = 5, K = 6
arr[] = {1,2,3,4,6}
Output: 1
*/
#include <iostream>
using namespace std;
int main()
{
    int k;
    int n;
    cin >> n;
    cin >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, h = n - 1;
    while (l <= h && a[l] <= k && a[h] >= k)
    {
        if (l == h)
        {
            if (a[l] == k)
                cout << "present";
            else
                cout << "not present";
            break;
        }
        int ind = l + (((double)((h - l) / (a[h] - a[l]))) * (k - a[l]));
        if (a[ind] == k)
            cout << "present";
        if (a[ind] < k)
            l = ind + 1;
        if (a[ind] > k)
            h = ind - 1;
    }
    if (!(l <= h && a[l] <= k && a[h] >= k))
        cout << "not present";
    return 0;
}