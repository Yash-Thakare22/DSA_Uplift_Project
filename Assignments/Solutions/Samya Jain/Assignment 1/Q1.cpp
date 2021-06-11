/*Question 1.

             *  *  *  *  *
          *  *  *  *  *
       *  *  *  *  *
    *  *  *  *  *
 *  *  *  *  *
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter any number : ";
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n - i; j++ )
            cout << "  ";
        for ( int k = 0; k < n; k++ )
            cout<< "*  ";
        cout << endl;
    }

    return 0;
}
