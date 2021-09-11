/*

Question 6
Write a one line function to return position of first 1 from right to left, in binary representation of an integer

I/P:
18 (010010)

O/P:
2

*/

#include <iostream>
#include <math.h>
using namespace std;
 
unsigned int firstbit(int n)
{
    return log2(n & -n) + 1;
}

int main()
{

    int n;
    cin>>n;
    cout <<firstbit(n);
    return 0;
}
