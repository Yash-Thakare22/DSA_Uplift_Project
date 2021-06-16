#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for (int i = -n; i <= n; i++)
    {
		if(i == 0) continue;
        for (int j = -n; j <= n; j++)
        {
			if (abs(i+j) > n) {
				cout << "* ";
			}
			else if (abs(j-i) > n){
				cout << "* ";
			} else {
				cout << "  ";
			}
        }
		cout << endl;
    }
    return 1;
}