/*

Question 1:Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.
Input: 
5
1 0 1 1 0
Output:
0 0 1 1 1

*/

#include <iostream>
using namespace std;
 
void ascendsort(int arr[], int n)
{
    int count = 0; 
 
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            count++;
    }

    for (int i = 0; i < count; i++)
        arr[i] = 0;
 
    for (int i = count; i < n; i++)
        arr[i] = 1;
}
 
void print(int arr[], int n)
{
    cout << "Sorted array is: ";
 
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    ascendsort(a, n);
    print(a,n);
    return 0;
}
