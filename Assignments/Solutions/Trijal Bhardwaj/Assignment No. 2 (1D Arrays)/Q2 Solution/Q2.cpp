/*
Question 2
An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers
Note: Order of elements is not important here
I/P:
-2 -3 7 9 -4 2 5
O/P:
-2 -3 -4 9 7 2 5
*/

#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the"
         << " " << n << " Array Elements : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    j = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
    cout << "\nArray Elements After Rearranging So That All -ve No.s Appears Before All +ve No.s : " << endl;
    for (i = 0; i < n; i++) {
        cout << arr[i] <<  " " ;
    }
    cout << endl;
    return 0;
}
