/*

Question 4
Given an integer x, write a function that multiplies x with 3.5 and returns the integer result. You are allowed to use only bitwise operator

I/P:
5 

O/P:
17

*/


#include <iostream>
using namespace std;
 
int multiplyWith3Point5(int x)
{
    return (x<<1) + x + (x>>1);
}

int main()
{
    int x;
    cin>>x;
    cout<<multiplyWith3Point5(x);
    return 0;
}
