/*
Question 4
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
int main() {
    int n, i, j;
    int maxSum = 0;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the"
         << " " << n << " Array Elements : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout << "\nContiguous Sub-Array with Maximum Sum is : " << maxSum;
    cout << endl;
    return 0;
}
