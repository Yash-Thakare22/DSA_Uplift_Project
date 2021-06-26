/*
Question 2: Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.
Input: 
N = 5, K = 3
arr[] = {3,5,4,2,9}  -> 2 3 4 5 9
Output: 
4

*/

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int a[100],n,k;
    cin>>n;
    cin>>k;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Input array"<<" ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    sort(&a[0],&a[n-1]); //STL function
    cout<<endl<<"Kth smallest element"<<" ";
     cout<<a[k-1]<<" ";
}
