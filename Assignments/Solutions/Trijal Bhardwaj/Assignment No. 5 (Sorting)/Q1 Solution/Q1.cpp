/*
Question 1
Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.
Input:
5
1 0 1 1 0
Output:
0 0 1 1 1
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the Size of the Binary Array : ";
    cin >> n;
    int a[n];
    cout<<"\nEnter the Binary Number : ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    cout<<"\nBinary Array After Arranging It In Increasing Order : \n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
