/* Question 2

An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers
Note: Order of elements is not important here


I/P:
-2  -3 7 9 -4 2 5

O/P:
-2 -3 –4 7 9 2 5
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


    cout << endl << "The Output Array is : " ;

    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++) {
            if (arr[j] < 0 && arr[i] > 0)
                swap(arr[i], arr[j]);
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}
