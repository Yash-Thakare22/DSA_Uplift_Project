/*
Question 1
Given an integer array and another integer element. The task is to find if the given element is present in array or not.
Example 1:
Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2
*/

#include <iostream>
using namespace std;
int main() {
    int x;
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int a[n];
    cout << "\nEnter the Elements of the Array : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "\nEnter the Element to Search in the Array : ";
    cin >> x;

    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << "\nElement " << x << " Found At Index " << i << " in the Array";
            break;
        }
    }
    if (i == 8)
        cout << "Element Not Found in the Array";
    cout << endl;
    return 0;
}
