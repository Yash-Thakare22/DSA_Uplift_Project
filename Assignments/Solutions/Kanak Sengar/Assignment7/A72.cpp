/*Question 2
Given two i/p signed integers, write function that returns true if the signs of given integers are different, otherwise false

I/P:
-4 +5

O/P:
True
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if((a^b)<0)
    cout<<"TRUE";
    else 
    cout<<"FALSE";
    return 0;
}