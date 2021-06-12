
/*

Given an array arr[] of N integers. Find the contiguous sub-array with maximum sum
Hint: Kadane’s Algorithm

I/P:
8
-2 -3 4 -1 -2 1 5 -3

O/P:
7


*/



#include<bits/stdc++.h>
using namespace std;

int max(int x,int y)
{
    return x>y?x:y;
}

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
 int cs=0,ms=INT_MIN;
 for(i=0;i<n;i++)  //Kadane's Algorithm
 {
     cs = max(cs+arr[i],arr[i]);
     ms = max(ms,cs);
 }

 cout<<"contiguous maximum sum  ";
 cout<<ms;
 return 0;
}