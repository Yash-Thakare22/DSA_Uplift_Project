#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) { 
        cout << string(n - i, ' ');
        cout << string(n, '*') << endl;
    }
    return 0;
}