#include <iostream>
using namespace std;

/*
Question3.
1
2 3
4 5 6
7 8 9 10
*/

// Pattern Number 3

int main() {

    int ROW = 4;
    int out = 1;
    
    for (int i = 1; i <= ROW; i++) {
       for (int j = 0; j < i; j++) {
           cout<< out << "\t";
           ++out;
       }
       
       cout<< endl;
       
    }
}