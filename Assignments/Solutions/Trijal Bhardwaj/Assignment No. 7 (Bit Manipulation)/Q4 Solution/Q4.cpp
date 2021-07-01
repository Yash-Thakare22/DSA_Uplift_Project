/*
Question 4
Given an integer x, write a function that multiplies x with 3.5 and returns the integer result. You are allowed to use only bitwise operator
I/P:
5
O/P:
17
*/

#include <iostream>
using namespace std;
int main() {
    long int n;
    cout<<"Enter the Integer : ";
    cin >> n;
    cout << "\nResult : " << ((n << 1) + n + (n >> 1)) << endl;
    return 0;
}
