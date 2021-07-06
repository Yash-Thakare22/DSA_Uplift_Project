#include <iostream>
using namespace std;

void prime( int n, int i=2)
{
    if(i==n)
    {cout<< "yes";
    return;}
    else
   { if(n%i==0)
    {
        cout<< "no";
        return;
    }
       prime(n,i+1);
   }
   
}

int main()
{
    int num;
    cin >> num;
    prime(num);

    return 0;
}
