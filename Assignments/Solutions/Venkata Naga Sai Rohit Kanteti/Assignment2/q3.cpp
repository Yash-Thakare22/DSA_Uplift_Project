
/*

Given an array, cyclically rotate the array clockwise by one

I/P:
1 2 3 4 5

O/P:
5 1 2 3 4


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
int temp =arr[n-1];
  for (i = n-1; i > 0; i--)
      arr[i] = arr[i-1];
 arr[0] = temp;
 cout<<"array rotated ";
 for(i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }
 return 0;
}