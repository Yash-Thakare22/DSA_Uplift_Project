/*

Question 1: Given an integer array and another integer element. The task is to find if the given element is present in array or not.
Example 1:
Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2

*/


#include <iostream>
using namespace std;
  
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
  
    int index = search(a, n, x);
    if (index == -1)
        cout << "Element is not present in the array";
    else
        cout << "Element found at position " << index;
  
    return 0;
}

