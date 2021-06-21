/*
Write a program to add one to a given number. You are allowed to use only bitwise operator

I/P:
30

O/P:
31
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    cout<<"Ans "<<-(~n);
  
    return 0;
}
