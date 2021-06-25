
#include <iostream>
#include<math.h>
using namespace std;//function to return position of first 1 from right to left, in binary representation of an integer


 
int main()
{
    long int num;
    cin>>num;

    cout << log2(num & (-num)) + 1;
 
    return 0;
}