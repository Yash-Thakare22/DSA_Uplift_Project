#include <bits/stdc++.h>
using namespace std;


void findFirstAndLast(int arr[], int n, int x)
{
	int first = -1, last = -1;
	for (int i = 0; i < n; i++) {
		if (x != arr[i])
			continue;
		if (first == -1)
			first = i;
		last = i;
	}
	if (first != -1)
		cout << "First Occurrence = " << first
			<< "\nLast Occurrence = " << last;
	else
		cout << "0";
}


int main()
{
	int arr[] = { 1, 2, 2, 3, 3, 4, 5, 6, 7, 7 };
	int n = sizeof(arr) / sizeof(int);
	int x = 10;
	findFirstAndLast(arr, n, x);
	return 0;
}