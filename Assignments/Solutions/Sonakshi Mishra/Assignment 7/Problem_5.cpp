
#include <iostream>
using namespace std;//adding one to a number using bitwise operator

int increment_one(int n)
{
    int t = 1;

    {
        n = n ^ t;
        t<<= 1;
    }
     
    n = n ^ t;
    return n;
}
 
int main()
{
    int n;
    cin>>n;
    cout<<increment_one(n);
    return 0;
}