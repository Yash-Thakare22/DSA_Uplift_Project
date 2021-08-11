//https://www.geeksforgeeks.org/recursive-bubble-sort/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    if(n == 1)
        return;
    for (int i = 0; i < n; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);

    return bubbleSort(arr, n - 1);
}

int main() {
    cout << "Enter size of array ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bubbleSort(arr, n);
    cout << "The sorted array is : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
