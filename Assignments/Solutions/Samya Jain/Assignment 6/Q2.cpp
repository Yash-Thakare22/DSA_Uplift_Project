/* Question 2: Given a sorted array of positive integers (elements may be repeated) and a number x.
 The task is to find the leftmost index of x in the given array.
Example 1:
Input:
N = 10
arr[] = {1,1,2,2,3,4,5,5,6,7}
x = 1
Output: 0
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int leftmostElement(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x) {
            return i;
            break;
        }
    return -1;
}
int main()
{
    int n, x;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];

    cout << "Enter elements :";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter elements to search:";
    cin >> x;

    int index = leftmostElement(arr, n, x);
    if (index == -1)
        cout << "Element is not present in the array";
    else
        cout << "Element found at position first " << index;

    return 0;
}
