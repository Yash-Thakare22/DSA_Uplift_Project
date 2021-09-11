/*
Question 6
Write a one line function to return position of first 1 from right to left, in binary representation of an integer
I/P:
18 (010010)
O/P:
2
*/

#include <iostream>
#include<math.h>
using namespace std;
int main() {
    long int n;
    cout << "Enter an Integer : ";
    cin >> n;
    cout << "\nPosition of First 1 (From Right To Left) in the Binary Representation of the Above Integer is : " << log2(n & (-n)) + 1 << endl;
    return 0;
}
