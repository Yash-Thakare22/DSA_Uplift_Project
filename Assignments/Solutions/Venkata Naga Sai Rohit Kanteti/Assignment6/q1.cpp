/*
Question 1: Given an integer array and another integer element. The task is to find if the given element is present in array or not.
Example 1:
Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2*/

#include<bits/stdc++.h>
using namespace std;

int main()
{   int a[100],n;
cin>>n;
cout<<"Enter the elments of the array"<<endl;
for(int i=0;i<n;i++) cin>>a[i];
cout<<"Enter the Element to search"<<" ";
int key,i;
cin>>key;

for( i=0;i<n;i++)
{
    if(a[i]==key)
    {
        cout<<"Found at index  "<<i;
        
    }
}
if(i==n)cout<<"Element not found"    ;


return 0;
}
