/*
Question 2
Given two i/p signed integers, write function that returns true if the signs of given integers are different, otherwise false
I/P:
-4 +5
O/P:
True
*/

#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout<<"Enter the Two Signed Integers : ";
    cin >> a >> b;
    if ((a ^ b) < 0)
        cout << "\nTRUE (Signs of the Two Integers are Different)" << endl;
    else
        cout << "FALSE ((Signs of the Two Integers are Same))" << endl;
    return 0;
}
