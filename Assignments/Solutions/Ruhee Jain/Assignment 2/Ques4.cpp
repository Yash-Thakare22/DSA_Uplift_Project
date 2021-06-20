/*

Question 4

Given an array arr[] of N integers. Find the contiguous sub-array with maximum sum
Hint: Kadane’s Algorithm

I/P:
8
-2 -3 4 -1 -2 1 5 -3

O/P:
7

*/


# include <iostream>
using namespace std;


int maxsum(int a[], int n)
{
    
    int max_end=0, max_so_far=0;
    for(int i=0; i<n; i++)
    {
        max_end+=a[i];
        if(max_end<0)
            max_end=0;
        
        if(max_end>max_so_far)
            max_so_far=max_end;
    }
    return max_so_far;
}
 

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    cout<<maxsum(a,n);
 
    return 0;
}
