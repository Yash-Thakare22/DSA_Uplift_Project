#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 4, 3, 4, 4, 5, 5, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int ones = 0, twos = 0;
	int not_threes;

	for (int i = 0; i < n; i++)
	{
		twos = twos | (ones & arr[i]);
		ones = ones ^ arr[i];
		not_threes = ~(ones & twos);
		ones &= not_threes;
		twos &= not_threes;
	}
	
	cout << ones;
	return 0;
}

