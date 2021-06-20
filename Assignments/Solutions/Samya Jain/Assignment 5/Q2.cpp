/* Question 2: Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.
Input:
N = 5, K = 3
arr[] = {3,5,4,2,9}
Output:
4
*/

 #include <iostream>

using namespace std;

void smallest_k(int arr[], int n, int k) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout << arr[k-1];

}


int main() {

    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];

    cout << "Enter elements :";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the index : ";
    int k;
    cin >> k;

    cout << k << " smallest element is : ";
    smallest_k(arr, n, k);

    return 0;
}

