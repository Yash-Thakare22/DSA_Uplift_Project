#include<iostream>
using namespace std;

/*

1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1

PATTERN 7
*/

int main() {
    int ROWS = 6;
    int out;
    for (int i = 0; i < ROWS; i++) {
        for(int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                out = 1;
            else
                out = out*(i - j + 1) / j;

            cout << out << " ";
        }
        cout << endl;
    }
}
