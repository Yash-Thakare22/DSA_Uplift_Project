#include<bits/stdc++.h>
using namespace std;

void findElements(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
			if (arr[j] > arr[i])
				count++;

		if (count >= 2)
			cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = { 2, -6 ,3 , 5, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	findElements(arr, n);
	return 0;
}
