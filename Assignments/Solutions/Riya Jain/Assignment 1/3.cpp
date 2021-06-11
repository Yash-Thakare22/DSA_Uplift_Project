#include <iostream>
using namespace std;

int main() {
    int n, c = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < 2*i+1; j++) {
            cout << c << " " ;
            c++;
        }
        cout << endl ;
    }
    return 0;
}  