
/*

An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers
Note: Order of elements is not important here


I/P:
-2  -3 7 9 -4 2 5 

O/P:
-2 -3 –4 7 9 2 5

*/



#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int main()
{
 int arr[100],i,j,k;
 int n;
 cin>>n;
 cout<<"Enter the elements";
 for(i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 j=0;
 for(i=0;i<n;i++)
 {
       if(arr[i]>0)
       {
          break;
       }

 }
 for(j=i;j<n;j++)
 {
       if(arr[j]<0)
       {
         swap(&arr[j],&arr[i]);
         i++;
       }

 }

 cout<<"reordered elements "<<endl;
 for(i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }
 return 0;
}