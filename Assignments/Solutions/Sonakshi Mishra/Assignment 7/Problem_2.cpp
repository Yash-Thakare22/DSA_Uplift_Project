#include <iostream>
using namespace std;//function that returns true if the signs of given integers are different, otherwise false
int is_sign_different(int num1,int num2)
{
    if((num1 ^ num2) < 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a,b;
    cin>>a>>b;

    if(is_sign_different(a,b)) {
        cout<<" True";
    }
    else {
        cout<<"False";
    }
    return 0;
}
