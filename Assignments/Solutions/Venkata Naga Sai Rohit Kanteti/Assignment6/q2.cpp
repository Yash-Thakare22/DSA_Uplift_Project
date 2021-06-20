/*
Question 2: Given a sorted array of positive integers (elements may be repeated) and a number x. The task is to find the leftmost index of x in the given array.
Example 1:
Input:
N = 10
arr[] = {1,1,2,2,3,4,5,5,6,7}
x = 1
Output: 0

*/
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
        cout<<"Left most index is "<<i;
        break;
    }
}
if(i==n)cout<<"Element not found"    ;


return 0;
}
