#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1-n, k = 1; j < n; j++)
        {
			if (abs(i + abs(j)) >= n) {
				cout << n - abs(j);
				cout << " ";
			} else {
				cout << "  ";
			}
        }
		cout << endl;
    }
    return 0;
}