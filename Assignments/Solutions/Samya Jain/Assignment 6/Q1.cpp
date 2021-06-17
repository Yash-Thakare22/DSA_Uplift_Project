/* Question 1: Given an integer array and another integer element. The task is to find if the given element is present in array or not.
Example 1:
Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int searchElement(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
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

    int index = searchElement(arr, n, x);
    if (index == -1)
        cout << "Element is not present in the array";
    else
        cout << "Element found at position " << index;

    return 0;
}

