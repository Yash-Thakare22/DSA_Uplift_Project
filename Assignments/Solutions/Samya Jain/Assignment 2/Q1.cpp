/* Question 1

Given an array arr[] of size N, the task is to sort the array in ascending order

I/P:
6
0 9 4 10 7 8
O/P:
0 4 7 8 9 10
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    cout << endl << "Sorted Array is : " ;

    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}
