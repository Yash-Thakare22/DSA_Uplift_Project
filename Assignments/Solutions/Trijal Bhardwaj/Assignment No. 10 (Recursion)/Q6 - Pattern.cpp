// Question Link: https://www.geeksforgeeks.org/print-given-pattern-recursively/

#include <bits/stdc++.h>
using namespace std;

void printPatternRowRecur(int n) {
    if (n < 1)
        return;

    cout << "* ";
    printPatternRowRecur(n-1);
}

void printPatternRecur(int n) {
    if (n < 1)
        return;

    printPatternRowRecur(n);

    cout << endl;

    printPatternRecur(n-1);

}

int main() {
    int n;
    cin>>n;
    printPatternRecur(n);
    return 0;
}
