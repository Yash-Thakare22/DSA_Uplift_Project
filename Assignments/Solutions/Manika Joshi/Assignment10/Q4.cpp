//decimal-binary-number-using-recursion/
#include <iostream>
using namespace std;

int binary(int n)
{
    if(n==0)
        return 0;

    else
        return n%2 + 10*binary(n/2);

}

int main()
{
    int m;
    cout << "Enter decimal number";
    cin >> m;

    cout<<"The binary for "<<m<<" is "<<binary(m);
    return 0;
}
