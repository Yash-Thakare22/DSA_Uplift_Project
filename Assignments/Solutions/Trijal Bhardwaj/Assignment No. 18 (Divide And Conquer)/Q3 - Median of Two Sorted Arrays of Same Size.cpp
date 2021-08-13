// Question Link: https://www.geeksforgeeks.org/median-of-two-sorted-arrays/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMedium(int arr1[], int arr2[], int n) {
    int ans[2 * n];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i <= n && j <= n) {
        if (arr1[i] > arr2[j]) {
            ans[k++] = arr2[j++];
        } else if (arr1[i] < arr2[j]) {
            ans[k++] = arr1[i++];
        }
    }
    while (i < n) {
        ans[k++] = arr1[i++];
    }
    while (j < n) {
        ans[k++] = arr1[j++];
    }
    return (ans[k / 2 - 1] + ans[k / 2]) / 2;

}
int main() {
    int arr1[] = {1, 12, 15, 26, 38};
    int arr2[] = {2, 13, 17, 30, 45};
    cout << getMedium(arr1, arr2, 5);

    return 0;
}
