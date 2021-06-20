#include<iostream>
using namespace std;

/*

54321
5432
543
54
5

PATTERN 6
*/

int main() {
    int ROWS = 5;
    for ( int rows = 0; rows < ROWS; rows++) {
        int out = ROWS;
        for ( int column = 0; column < ROWS - rows; column++ ) {
            cout<< out;
            out--;
        }
        cout<< endl;

    }






}