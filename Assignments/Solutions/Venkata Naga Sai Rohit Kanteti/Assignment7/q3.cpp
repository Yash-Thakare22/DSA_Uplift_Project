/*
Question 3
Given an integer n, find whether it is a power of 4 or not

I/P:
16

O/P:
Yes
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n&(n-1))==0 && !(n&0xAAAAAAAA))cout<<"Power  of 4";
    else cout<<"not a power of 4";
    return 0;
    
}
