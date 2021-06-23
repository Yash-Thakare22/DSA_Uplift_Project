#include <iostream>

using namespace std;

is_sign_different(int num_1, int num_2)
{
    if((num_1 ^ num_2) < 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int num_1;
    int num_2;
    cin>>num_1>>num_2;

    if(is_sign_different(num_1,num_2)) {
        cout<<"Signs are different ."<<endl;
    }
    else {
        cout<<"Signs are same ."<<endl;
    }
    return 0;
}
