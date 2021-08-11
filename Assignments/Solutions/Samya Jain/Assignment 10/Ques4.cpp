//https://www.geeksforgeeks.org/decimal-binary-number-using-recursion/

#include <iostream>
using namespace std;

int decimal2binary(int n) {
    if (n == 0)
        return 0;
    return n % 2 + 10 * decimal2binary(n / 2);
}

int main() {
    int n;
    cout << "Enter any number ";
    cin >> n;
    cout << "Binary : " << decimal2binary(n);
    return 0;
}
