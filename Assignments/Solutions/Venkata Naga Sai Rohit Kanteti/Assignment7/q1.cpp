/*
Question 1
Given an i/p array where every element occurs three times, except one element which occurs only once . Find that element

I/P:
4 3 5 5 4 4 5

O/P:
3
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{   int a[100],n;
    cin>>n;
    cout<<"Enter the elements of the array"<<" ";
    for(int i=0;i<n;i++)cin>>a[i];
    int ones = 0 ;
    int twos = 0 ;
    int not_threes, x ;

for(int i=0; i<n; i++ )
{
x = a[i];
twos |= ones & x ;
ones ^= x ;
not_threes = ~(ones & twos) ;
ones &= not_threes ;
twos &= not_threes ;
}

cout<<"unique element "<<ones; 
    return 0;
}
