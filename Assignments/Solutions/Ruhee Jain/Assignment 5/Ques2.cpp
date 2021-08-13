/*

Question 2: Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.
Input: 
N = 5, K = 3
arr[] = {3,5,4,2,9}
Output: 
4

*/


#include <iostream>
#include <algorithm>

using namespace std;
 
int kthSmallest(int a[], int n, int k)
{ 
    sort(a, a + n);
    return a[k - 1];
}
 

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout << "K'th smallest element is " << kthSmallest(a, n, k);
    return 0;
}
