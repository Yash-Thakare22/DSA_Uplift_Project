/* Question 1:

Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.
Input:
5
1 0 1 1 0
Output:
0 0 1 1 1
*/

#include <iostream>

using namespace std;

void binary_array(int arr[], int n) {

    int c = 0, c0 = 0;
    for (int j = 0; j < n ; j++) {
        if (arr[j] == 0)
            c0++;
        c++;
    }
    for(int i = 0; i < n; i++){
        if (i < c0)
            arr[i] = 0;
        else
            arr[i] = 1;
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

}


int main() {

    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];

    cout << "Enter elements :";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Sorted array is : ";
    binary_array(arr, n);

    return 0;
}
