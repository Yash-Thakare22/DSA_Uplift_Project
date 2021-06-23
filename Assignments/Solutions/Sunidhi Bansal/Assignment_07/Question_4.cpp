#include <iostream>

using namespace std;

int return_int(int num)
{
    int res = (num >> 1) + num + (num << 1);
    return res;
}

int main()
{
    int x;
    cin>>x;
    int res = return_int(x);
    
    cout<<res<<endl;

    return 0;
}
