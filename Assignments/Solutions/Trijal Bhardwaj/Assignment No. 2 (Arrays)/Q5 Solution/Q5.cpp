/*
Question 5
Given an array arr[] of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest
I/P:
5 10 40 4 6 5 10
O/P:
5 (5 is the first element that repeats)
*/

#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the"
         << " " << n << " Array Elements : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << "\nFirst Repeating Element in the Array Whose Index of First Occurrence is Smallest is : " << arr[j];
                cout << endl;
                return 0;
            }
        }
    }
    cout << "\nNo First Repeating Element Found in the Array.";
    cout << endl;
    return 0;
}
