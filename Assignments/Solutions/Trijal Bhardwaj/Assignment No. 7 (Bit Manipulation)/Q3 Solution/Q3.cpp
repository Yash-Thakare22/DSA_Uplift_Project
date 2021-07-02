/*
Question 3
Given an integer n, find whether it is a power of 4 or not
I/P:
16
O/P:
Yes
*/

#include <iostream>
using namespace std;
bool isPowerOfFour(int n) {
    return (!(n & (n - 1)) && (n % 3 == 1));
}
int main() {
    int n;
    cout<<"Enter the Integer : ";
    cin >> n;
    if (isPowerOfFour(n) == 1)
        cout << "\nYES (Entered Integer is a Power of 4)" << endl;
    else
        cout << "\nNO (Entered Integer is NOT a Power of 4)" << endl;
    return 0;
}
