#include <iostream>
using namespace std;

int decimal_to_binary( int n)
{
   if(n==0)
   return 0;
   else 
   return n%2+10*(decimal_to_binary(n/2) );
   
}

int binary_to_decimal( int n,int base=1)
{
   if(n==0)
   return 0;
   else 
   return n%10*base+ binary_to_decimal(  n/10,base*2);
   
}

int main()
{
    int num,bin;
    cout<< "enter decimal number:";
    cin >> num;
    cout<< "enter binary number";
    cin>>bin;
    cout<< "binary for decimal:";
    cout<<decimal_to_binary(num)<<endl;
    cout<< " decimal for binary:";
    cout<< binary_to_decimal(bin);
    

    return 0;
}
