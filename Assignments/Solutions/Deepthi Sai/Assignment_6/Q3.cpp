#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n, int x)
{
    int l=0,r=n-1;

    while (l <= r) {
        int m = l + (r - l) / 2;
 
        
        if (arr[m] == x)
            return 1;
 
        
        if (arr[m] < x)
            l = m + 1;
 
        
        else
            r = m - 1;
    }
 
    
    return -1;
}


int main()
{
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<binarySearch(arr,n,k);
    
    return 0;
}
