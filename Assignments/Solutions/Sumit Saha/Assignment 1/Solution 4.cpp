/*
Question 4.
     *
    * *
   * * *
    * *
     *
*/


#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter any number : ";
    cin >> n;

    for ( int i = 1; i < n; i++ ) {
        for ( int j = n - i; j >= 1; j-- ){
            cout << "  ";
        }
        for ( int k = 1; k <= i; k++ ) {
            cout << " *  ";
        }

        cout << endl;
    }
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j < i; j++ ) {
            cout <<"  ";
            }
        for ( int k = i; k <= n; k++ ) {
            cout<<" *  ";
        }
        cout<<endl;
    }

    return 0;
}
