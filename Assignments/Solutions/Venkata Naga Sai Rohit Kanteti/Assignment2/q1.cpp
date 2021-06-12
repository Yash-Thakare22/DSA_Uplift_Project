
/*

Given an array arr[] of size N, the task is to sort the array in ascending order

I/P: 
6
0 9 4 10 7 8
O/P:
0 4 7 8 9 10


*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
 int arr[100],i,j;
 int n;
 cin>>n;
 cout<<"Enter the elements";
 for(i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 for(i=0;i<n;i++)
 {
     for(j=0;j<n-i-1;j++)
     {
         if(arr[j]>arr[j+1])
         {
             int temp = arr[j];
             arr[j] =arr[j+1];
             arr[j+1]=temp;
         }
     }
 }
 cout<<"sorted elements";
 for(i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }
 return 0;
}