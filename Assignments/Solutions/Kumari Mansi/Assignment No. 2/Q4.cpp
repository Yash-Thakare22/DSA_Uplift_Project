/*Question 4
Given an array arr[] of N integers. Find the contiguous sub-array with maximum sum
Hint: Kadane’s Algorithm

I/P:
8
-2 -3 4 -1 -2 1 5 -3
O/P:
7
*/
#include <iostream>
using namespace std;
int main()
{
    int maxsum = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            maxsum = max(maxsum, sum);
        }
    }
    cout << maxsum;
    return 0;
}