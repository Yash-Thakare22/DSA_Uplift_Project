/* Question 3:
Given a sorted array of size N and an integer K. Check if K is present in the array or not.
Example 1:
Input:
N = 5, K = 6
arr[] = {1,2,3,4,6}
Output: 1
*/

#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int x) {

    int start = 0, last = n - 1;

    while (start <= last) {

        int mid = start + (last - start) / 2;

        if (arr[mid] == x)
            return 1;
        else if (arr[mid] > x)
            last = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main() {


    int n, x;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];

    cout << "Enter elements :";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter elements to search:";
    cin >> x;

    cout << binarySearch(arr, n, x);

    return 0;
}
