/*

Question 4: Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.
Example 1:
Input:
N = 8
arr[] = {1,1,1,1,1,0,0,0}
Output: 5

*/


#include <iostream>
using namespace std; 

int countOnes(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high) { 
        int mid = low+ (high-low)/2;
 
        if (arr[mid] < 1)
            high = mid - 1;
            
        else if (arr[mid] > 1)
            low = mid + 1;
        else
        {
            if (mid == n - 1 || arr[mid + 1] != 1)
                return mid + 1;
            else
                low = mid + 1;
        }
    }
}
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
   
    cout <<"Count of 1's in given array is "<< countOnes(a, n);
    return 0;
}
