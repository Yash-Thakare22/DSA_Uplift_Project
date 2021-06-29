/*
Question 4
Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.
Example 1:
Input:
N = 8
arr[] = {1,1,1,1,1,0,0,0}
Output: 5
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the Size of the Binary Sorted Non-Increasing Array : ";
    cin >> n;
    int a[n];
    cout << "\nEnter the Elements of the Binary Sorted Non-Increasing Array : ";
    int s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    cout << "\nThe Count of 1s in Binary Sorted Array is : " << s << endl;
    return 0;
}
