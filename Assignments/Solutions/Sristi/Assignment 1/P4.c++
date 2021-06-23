#include <iostream>
using namespace std;

/*

     *
    * *
   * * *
    * *
     *

Pattern 4 */

int main() {

    int col_count = 1;
    int col_countp = 3;
    int COLUMN = 3;

    for (int i = 0; i < COLUMN; i++) {

        for (int space = col_countp; space >= 0; space--) {
            cout<< " ";
        }
        col_countp--;


        for (int stars = 1; stars <= col_count; stars++) {
            cout<< "* ";    
        }
        col_count++;
        cout<< endl;
      
    }
    for (int i = 0; i < COLUMN; i++) {

        
        for (int space = 0; space <= col_countp + 2; space++) {
            cout<< " ";
        }
        col_countp++;

        for (int stars = col_count - 2; stars > 0; stars--) {
            cout<< "* ";    
        }
        col_count--;
        cout<< endl;
      
    }

}