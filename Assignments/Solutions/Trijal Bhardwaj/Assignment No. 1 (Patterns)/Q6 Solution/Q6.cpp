/*
Question 6
54321
5432
543
54
5
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the Number of Rows : ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
