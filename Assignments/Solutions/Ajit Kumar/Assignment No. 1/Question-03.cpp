/*

Question3.
1
2 3
4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;

int main() {
    int count =1;
    int i, j;
    int n = 4;

    //cin>>n;

    // Printing number in increasing order
    for(i=0; i<=n; i++) {

        // Print the number++ 
        for(j=1; j<=i; j++) {
            cout <<count<<" ";
            count++;
        }
        cout<<endl;

    }

}