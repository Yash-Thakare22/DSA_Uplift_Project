/* Question 3:

The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection

Input:
N = 4, arr1[] = {1, 2, 3, 4}
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4
*/

#include <iostream>

using namespace std;

void intersection(int arr[], int arr1[], int n, int m) {

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        if (arr[i] != arr[i + 1] && arr1[j] != arr1[j + 1]) {
        	if (arr[i] == arr1[j])
        	cout << arr[i] << " ";
		}
}


int main() {

    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];

    cout << "Enter elements :";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int m;
    cout << "Enter the size of another array :";
    cin >> m;
    int arr1[m];

    cout << "Enter elements :";
    for(int i = 0; i < m; i++)
        cin >> arr1[i];

    cout << "Intersection is : ";
    intersection(arr, arr1, n, m);

    return 0;
}
