/*
Question 1
Given an array arr[] of size N, the task is to sort the array in ascending order
I/P:
6
0 9 4 10 7 8
O/P:
0 4 7 8 9 10
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
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\nElements of Array Sorted in Ascending Order : ";
    for (i = 0; i < n; i++) {
        cout << arr[i] <<  " " ;
    }
    cout << endl;
    return 0;
}
