/*Question 5.

    1           1
    1 2       2 1
    1 2 3   3 2 1
    1 2 3 4 3 2 1
*/

#include <iostream>
using namespace std;

int main() {

    int n = 7;

    for ( int i = 1; i <= 4; i++ ){
        for ( int j = 1; j <= n; j++ ){
            if ( i - j  >= 0)
                cout << j << " ";
            else if ( i + j >=  n + 1 )
                cout << 8 - j << " ";
            else
                cout << "  ";
        }

        cout << endl;
    }


    return 0;
}
