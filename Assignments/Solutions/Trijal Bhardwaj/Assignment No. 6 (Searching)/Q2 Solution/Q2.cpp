/*
Question 2
Given a sorted array of positive integers (elements may be repeated) and a number x. The task is to find the leftmost index of x in the given array.
Example 1:
Input:
N = 10
arr[] = {1,1,2,2,3,4,5,5,6,7}
x = 1
Output: 0
*/

#include <iostream>
using namespace std;
int main() {
    int n, x;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int a[n];
    cout << "\nEnter the Elements of the Array in Sorted Form (Elements Can Be Repeated) : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "\nEnter the Element Whose Left-Most Index is to be Found in the Array : ";
    cin >> x;
    int c = -1, j;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            j = i;
            ++c;
        }
    }
    cout << "\nLeft-Most Index of the Element " << x << " is Found At the Index " << j - c << " in the Array";
    cout << endl;
    return 0;
}
