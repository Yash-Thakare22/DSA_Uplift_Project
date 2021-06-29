#include <iostream>
using namespace std;

// Let's make patterns now hurray!
// Pattern 2
/*
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

int main() {
    int COLUMN = 5;
    int row = 0;

    for (int col_count = COLUMN; col_count > 0; col_count--) {

        for (int star_left = col_count; star_left > 0; star_left--) {
            cout << "*";
        }

        for (int space_mid = 0; space_mid < row * 2; space_mid++) {
            cout << " ";
        }
        row++;

        for (int star_right = col_count; star_right > 0; star_right--) {
            cout << "*";
        }

        cout << endl;
    }
    for (int col_count = 0; col_count < COLUMN; col_count++) {

        for (int star_left = 0; star_left <= col_count; star_left++) {
            cout << "*";
        }

        for (int space_mid = row * 2 - 2; space_mid > 0; space_mid--) {
            cout << " ";
        }
        row--;

        for (int star_right = 0; star_right <= col_count; star_right++) {
            cout << "*";
        }

        cout << endl;
    }



    cout << "Hey Look A Pattern!" << endl;
    return 0;
}