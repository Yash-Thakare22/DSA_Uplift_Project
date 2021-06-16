#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for (int i = -n; i <= n; i++)
    {
        for (int j = -n; j <= n; j++)
        {
			if (abs(i+j) <= n && abs(j-i) <= n) {
				cout << "*";
			} else {
				cout << " ";
			}
        }
		cout << endl;
    }
    return 1;
}