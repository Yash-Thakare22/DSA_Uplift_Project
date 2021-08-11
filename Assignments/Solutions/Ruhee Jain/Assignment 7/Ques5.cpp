/*

Question 5
Write a program to add one to a given number. You are allowed to use only bitwise operator

I/P:
30

O/P:
31

*/

#include <iostream>
using namespace std;
 
int addOne(int x)
{
    int m = 1;
    
    while( x & m )
    {
        x = x ^ m;
        m <<= 1;
        cout<<x<<endl;
        cout<<m<<endl;
    }

    x = x ^ m;
    return x;
}
 
int main()
{   
    int x;
    cin>>x;
    cout<<addOne(x);
    return 0;
}
