/* Question 4: Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.
Example 1:
Input:
N = 8
arr[] = {1,1,1,1,1,0,0,0}
Output: 5
*/

#include <iostream>

using namespace std;

int binaryArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] == 0)
            return i;

}

int main() {


    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];

    cout << "Enter binary elements :";
    for(int i = 0; i < n; i++)
        cin >> arr[i];



    cout << binaryArray(arr, n);

    return 0;
}

