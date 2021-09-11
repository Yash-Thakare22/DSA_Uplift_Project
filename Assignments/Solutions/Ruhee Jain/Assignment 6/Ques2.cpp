/*

Question 2: Given a sorted array of positive integers (elements may be repeated) and a number x. The task is to find the leftmost index of x in the given array.
Example 1:
Input:
N = 10
arr[] = {1,1,2,2,3,4,5,5,6,7}
x = 1
Output: 0

*/


#include <iostream>
using namespace std;
 
int first(int arr[], int l, int r, int x,int n)
{
    int res=-1;
    while (l <= r) {
        
        int m = l + (r - l) / 2;
        
        if (arr[m] < x)
            l = m + 1;
 
        
        else if(arr[m] > x)
            r = m - 1;
            
        else {
           res=m;
           r=m-1; 
        }
           
    }
    return res;
}
 
int main(void)
{
    int arr[] = { 1, 1, 2, 2, 3, 4, 5, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(int);
 
    int x = 1;
    cout<<"First Occurrence = "<<first(arr, 0, n - 1, x, n);
   
    return 0;
}
