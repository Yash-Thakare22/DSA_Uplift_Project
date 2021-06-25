#include <iostream>

using namespace std;// a function that multiplies x with 3.5 and returns the integer result.

int return_int(int num)
{
    int t = (num >> 1) + num + (num << 1);
    return t;
}

int main()
{
    int num;
    cin>>num;
    int res = return_int(num);
    
    cout<<res;

    return 0;
}