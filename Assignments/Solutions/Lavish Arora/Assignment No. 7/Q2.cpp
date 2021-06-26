#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter two no.";
    cin >> a >> b;
    if ((a ^ b) < 0)
        cout << "TRUE";
    else
        cout << "FALSE";
    return 0;
}