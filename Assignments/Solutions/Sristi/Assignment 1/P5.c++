#include<iostream>
using namespace std;



/*

    1           1
    1 2       2 1
    1 2 3   3 2 1
    1 2 3 4 3 2 1

    Pattern 5

*/

int main() {

    int COLUMN = 5;
    int row = 4;

 for (int col_count = 0; col_count < COLUMN; col_count++) {

        for (int num_left = 1; num_left <= col_count; num_left++) {
            cout << num_left << " ";
        }

        for (int space_mid = row * 4 - 2; space_mid > 0; space_mid--) {
            cout << " ";
        }
        row--;

        for (int num_right = col_count; num_right > 0; num_right--) {
            if (num_right != COLUMN - 1)
                cout<< num_right << " "; 
        }

        cout << endl;
    }




}