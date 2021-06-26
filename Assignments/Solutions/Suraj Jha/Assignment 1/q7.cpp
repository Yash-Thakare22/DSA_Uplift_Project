#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

	int arr1[100], arr2[100];
	arr1[0] = arr2[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++) {
			cout << arr2[j];
			cout << "\t";
		}

		for (int j = 1; j <= i; j++) {
			arr2[j] = arr1[j] + arr1[j-1];
		}

		for (int j = 0; j <= i; j++)
		{
			arr1[j] = arr2[j];
		}

		cout << endl;
    }
    return 0;
}