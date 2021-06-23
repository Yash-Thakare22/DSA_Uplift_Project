/*
Question 4: Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.
Example 1:
Input:
N = 8
arr[] = {1,1,1,1,1,0,0,0}
Output: 5
.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{   int a[100],n;
cin>>n;
cout<<"Enter the elments of the array"<<endl;
for(int i=0;i<n;i++) cin>>a[i];
int i,count=0;

for( i=0;i<n;i++)
{
    if(a[i]==1)
    {
        count++;
    }
    else// array contains 1's or 0's
    {
        break; //we can break once we encounter first 0 since the given array is sorted in non decreasing order
    }
}
cout<<"found "<<count<<" ones";

return 0;
}
