/*Question 6.
54321
5432
543
54
5
*/
#include <iostream>
using namespace std;

int main() {



    for ( int i = 0; i <= 5; i++ ) {
        for ( int j = 5; j > i; j--)
            cout << j << " ";


        cout << endl;
    }

    return 0;
}
