/*
Question 2
Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.
Input:
N = 5, K = 3
arr[] = {3,5,4,2,9}
Output:
4
*/

#include <iostream>
using namespace std;
int main() {
    int i, j, t, n, k;
    cout << "Enter the Size of the Array N : ";
    cin >> n;
    cout << "\nEnter the Number K : ";
    cin >> k;
    int a[n];
    int flag;
    cout << "\nEnter the Elements of the Array : ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++) {
        flag = 0;
        for (j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    cout << "\nKth Smallest Element in the Array is : ";
    for (i = 0; i < n; i++)
        if (i == k - 1)
            cout << a[i] << " ";
    cout << endl;
    return 0;
}
