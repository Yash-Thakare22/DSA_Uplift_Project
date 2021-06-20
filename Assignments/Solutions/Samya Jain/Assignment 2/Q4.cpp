/* Question 4

Given an array arr[] of N integers. Find the contiguous sub-array with maximum sum
Hint: Kadane’s Algorithm

I/P:
8
-2 -3 4 -1 -2 1 5 -3

O/P:
7
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    int maximum = 0;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    cout << endl;

    for (int i = 0; i < n; i++){
        int sum =0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum > maximum)
                maximum = sum;
        }
    }

    cout << maximum;

    cout << endl;

    return 0;
}

