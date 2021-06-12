
/*Question 2.

* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *

*/

#include <iostream>
using namespace std;

int main() {

    int n=5;

    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n - i; j++ )
            cout << "* ";
        for ( int k = 0; k < i+1; k++ )
            cout << "  ";
        for ( int m = 0; m < n-i; m++ )
            cout << "* ";
        cout << endl;
    }

    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < i+1; j++ )
            cout << "* ";
        for ( int k = n; k > i; k-- )
            cout << "  ";
        for ( int j = 0; j < i+1; j++ )
            cout << "* ";
        cout << endl;

    }

    return 0;
}
