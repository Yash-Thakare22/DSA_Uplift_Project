/*

Question 4
Given an integer x, write a function that multiplies x with 3.5 and returns the integer result. You are allowed to use only bitwise operator

I/P:
5 

O/P:
17
*/
#include<bits/stdc++.h>
using namespace std;

int mult(int x)
{
    int r = 0;

     int x1Shift = x << 1;
     int x2Shifts = x << 2;
 
     r = (x ^ x1Shift) ^ x2Shifts;
    int c = (x & x1Shift) | (x & x2Shifts)| (x1Shift & x2Shifts);
    while (c > 0) 
    {
        c <<= 1;
        int t = r;
        r ^= c;
        c &= t;
    }
        r = r >> 1;
        return r;
}

int main()
{
    int n;
    cin>>n;
    int ans = mult(n);
    cout<<"Ans "<<ans;
    return 0;
}
