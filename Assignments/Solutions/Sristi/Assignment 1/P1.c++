#include <iostream>
using namespace std;

// Let's make patterns now hurray!
// Pattern 1
/*
             *  *  *  *  *
          *  *  *  *  *
       *  *  *  *  *
    *  *  *  *  *
 *  *  *  *  *


*/


int main() {
    int COLUMN = 5;
    int row = COLUMN;

    for (int col_count = COLUMN; col_count > 0; col_count--) {

        for (int i = row; i > 0; i--) {
            cout<< " " << "\t";
        }
        row--;
        for (int j = 0; j < COLUMN; j++) {
            cout<< "*" << "\t";
        }
        cout<< endl;
    }

    cout<< "Hey Look A Pattern!" << endl;
    return 0;

}