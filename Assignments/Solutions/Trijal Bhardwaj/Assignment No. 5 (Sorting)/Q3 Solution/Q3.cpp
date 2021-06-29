/*
Question 3
The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection
Input:
N = 4, arr1[] = {1, 2, 3, 4}
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4
*/

#include <iostream>
using namespace std;
int main() {
    int n, m, i, j;
    cout << "Enter the Size of the Array 1 : ";
    cin >> n;
    int a[n];
    cout << "\nEnter the Elements of the Array 1 In Sorted Form : ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "\nEnter the Size of the Array 2 : ";
    cin >> m;
    int b[m];
    cout << "\nEnter the Elements of the Array 2 In Sorted Form : ";
    for (i = 0; i < m; i++)
        cin >> b[i];
    cout << "\n\nIntersection (Common Elements) of the Two Arrays 1 & 2 are : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
    cout << endl;
    return 0;
}
