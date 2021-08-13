//https://www.geeksforgeeks.org/print-given-pattern-recursively/

#include <iostream>
using namespace std;

void printRow(int n) {
    if (n < 1)
        return;
    else {
        cout << "*";
        printRow(n-1);
    }
}
void getPattern(int n) {
    if (n < 1)
        return;
    else {
        printRow(n);
        cout << endl;
        getPattern(n-1);
    }
}

int main() {
    int n;
    cout << "Enter any number :";
    cin >> n;
    getPattern(n);
}
