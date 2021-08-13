//https://www.geeksforgeeks.org/program-for-factorial-of-a-number/

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter any positive number ";
    cin >> num;
    cout << "\nThe factorial is " << factorial(num);
    return 0;
}
