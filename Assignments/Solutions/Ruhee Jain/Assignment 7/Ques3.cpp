/*

Question 3
Given an integer n, find whether it is a power of 4 or not

I/P:
16

O/P:
Yes

*/

#include<iostream>
 
using namespace std;
 
bool isPowerOfFour(unsigned int n)
{
    int count = 0;
      if ( n && !(n&(n-1)) )
    {
        
        while(n > 1)
        {
            n >>= 1;
            count ++;
        }
 
    
        return (count%2 == 0)? 1 :0;
    }
 
    return 0;
}
 
int main()
{
    int test_no;
    cin>>test_no;
    if(isPowerOfFour(test_no))
        cout << test_no << " is a power of 4" ;
    else
        cout << test_no << " is not a power of 4";
}
