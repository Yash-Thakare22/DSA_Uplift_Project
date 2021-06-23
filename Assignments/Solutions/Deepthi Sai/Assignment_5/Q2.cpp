#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void kmax(int arr[],int n,int k)
{
 sort(arr,arr+n);
 cout<<arr[n-k];
}
int main()
{
    int n,k;
    cin>>n>>k;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    kmax(arr,n,k);
    
return 0;
}

//time complexity=O(nlogn) space complexity=O(n)
