/*
Question 2
* * * * *  * * * * *
* * * *        * * * *
* * *              * * *
* *                    * *
*                          *
*                          *
* *                    * *
* * *              * * *
* * * *        * * * *
* * * * *  * * * * *
*/

#include <iostream>
using namespace std;
int main() {
    int i, j, n;
    cout << "Enter the Number of Rows In Upper Half of the Pattern : ";
    cin >> n;
    cout << endl;
// Upper Half of the Pattern
    for (i = 0; i < n; i++) {
        for (j = 0; j < (2 * n); j++) {
            if (i + j <= n - 1)     // Upper Left Triangle
                cout << "*";
            else
                cout << " ";
            if ((i + n) <= j)       // Upper Right Triangle
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
// Lower Half of the Pattern
    for (i = 0; i < n; i++) {
        for (j = 0; j < (2 * n); j++) {
            if (i >= j)     // Lower Left Triangle
                cout << "*";
            else
                cout << " ";
            if (i >= (2 * n - 1) - j)       // Lower Right Triangle
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
