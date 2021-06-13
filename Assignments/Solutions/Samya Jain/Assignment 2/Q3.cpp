/* Question 3.
Given an array, cyclically rotate the array clockwise by one

I/P:
1 2 3 4 5

O/P:
5 1 2 3 4
*/

#include <iostream>
using namespace std;

int main(){

    int n, temp;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    cout << endl << "Array after rotation is : " ;

    temp = arr[n-1];
    for (int i = 0; i < n; i++) {
        arr[n-i-1] = arr[n-i-2];

    }
    arr[0]  = temp;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}

