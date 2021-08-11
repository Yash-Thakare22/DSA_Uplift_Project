/*

Question 3:Given a sorted array of size N and an integer K. Check if K is present in the array or not.
Example 1:
Input:
N = 5, K = 6
arr[] = {1,2,3,4,6}
Output: 1

*/
#include <iostream>
using namespace std; 

int searchInSorted(int arr[], int n, int x) 
{ 
    int l=0;
    int r=n-1;
    int res=-1;
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        
        if (arr[m] == x)
            res=1;
 
        
        if (arr[m] < x)
            l = m + 1;
 
        
        else
            r = m - 1;
    }
 
    
    return res;

       
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
    int result = searchInSorted(a,n, x);
    cout<<result;
    return 0;
}
