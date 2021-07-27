/*

Question 2

https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/

*/

#include <iostream>
using namespace std;
 

int findMinEle(int A[], int n)
{
    if (n == 1)
        return A[0];
    return min(A[n-1], findMinEle(A, n-1));
}
 

int main()
{
    int arr[] = {1, 4, 45, 6, -50, 10, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<  findMinEle(arr, n);
    return 0;
}
