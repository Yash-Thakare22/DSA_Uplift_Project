/*
Given an array arr[] of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest
I/P:
5 10 40 4 6 5 10
O/P:
5 (5 is the first element that repeats)
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
 int flag=0;
cout<<"Answer ";
 for(i=0;i<n;i++)
 {
     for(j=i+1;j<n;j++)
     {
        if(arr[j]==arr[i])
        {
            cout<<arr[j]<<endl;
            flag=1;
            break;
        } 
        if(flag==1)break;
     }
 }

 
 return 0;
}
