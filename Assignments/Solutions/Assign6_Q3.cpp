#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int low, int high, int x)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		
		if (arr[mid] == x)
			return mid;
		else if (arr[mid] > x)
			high = mid - 1;
		else
			low = mid + 1;
	}
}


string isKSortedArray(int arr[], int n, int k)
{

	int aux[n];
	

	for (int i = 0; i<n; i++)
		aux[i] = arr[i];
	

	sort(aux, aux + n);
	

	for (int i = 0; i<n; i++)
	{

		int j = binarySearch(aux, 0, n-1, arr[i]);
		

		if (abs(i - j) > k)
			return "No";
	}
	

	return "Yes";
}


int main()
{
	int arr[] = {3, 2, 1, 5, 6, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 2;
	cout << "Is it a k sorted array?: "
		<< isKSortedArray(arr, n, k);
	return 0;	
}