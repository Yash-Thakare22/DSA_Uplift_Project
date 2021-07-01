/*
Question 5
Write a program to add one to a given number. You are allowed to use only bitwise operator
I/P:
30
O/P:
31
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    long int n;
    cout << "Enter the Number : ";
    cin >> n;
    cout << "\nOutput After Adding 1 To Number = " << (-(~n)) << endl;
    return 0;
}
