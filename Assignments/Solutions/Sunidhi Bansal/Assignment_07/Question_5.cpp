#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int a = 1;
    
    while(a & n)
    {
        n = n ^ a;
        a = a << 1;
    }
    n = n ^ a;
    
    cout<<n;
    return 0;
}

