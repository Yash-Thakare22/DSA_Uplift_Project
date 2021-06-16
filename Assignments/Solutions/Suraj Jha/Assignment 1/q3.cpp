#include <iostream>
using namespace std;

int main() {
    int n, counter = 1;
    cout << "Enter Number of Rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
		for (int j = 0; j < i; j++)
		{
			cout << counter++;
			cout << " ";
		}
		cout << endl;
    }
    return 1;
}