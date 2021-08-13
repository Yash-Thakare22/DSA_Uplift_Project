//https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/

#include <iostream>
using namespace std;

int minimum(int arr[], int n) {
    if(n == 1)
        return arr[0];
    return min(arr[n - 1], minimum(arr, n - 1));
}

int maximum(int arr[], int n) {
    if(n == 1)
        return arr[0];
    return max(arr[n - 1], maximum(arr, n - 1));
}

int main() {
    cout << "Enter size of array ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Min = " << minimum(arr, n);
    cout << "\nMax = " << maximum(arr, n);
}
