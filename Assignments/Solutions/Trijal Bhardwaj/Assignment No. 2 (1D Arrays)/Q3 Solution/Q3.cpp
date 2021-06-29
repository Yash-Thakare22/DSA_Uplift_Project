/*
Question 3
Given an array, cyclically rotate the array clockwise by one
I/P:
1 2 3 4 5
O/P:
5 1 2 3 4
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
    int x = arr[n - 1];
    for (i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = x;
    cout << "\nElements of Array After One Clockwise Cyclic Rotation : ";
    for (i = 0; i < n; i++) {
        cout << arr[i] <<  " " ;
    }
    cout << endl;
    return 0;
}
