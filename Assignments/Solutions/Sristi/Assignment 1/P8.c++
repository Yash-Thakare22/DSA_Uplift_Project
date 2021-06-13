#include <iostream>
using namespace std;

/*

 * * * * *
   * * *
    * *
     *
    Pattern 8
 */



int main() {
    int COLUMN = 5;
    int col_countp = 1;
    int col_count = 5;


    for (int i = 0; i < COLUMN; i++) {

        
        for (int space = 0; space <= col_countp + 2; space++) {
            cout<< " ";
        }
        col_countp++;

        for (int stars = col_count; stars > 0; stars--) {
            cout<< "* ";    
        }
        col_count--;
        cout<< endl;
    }
}
