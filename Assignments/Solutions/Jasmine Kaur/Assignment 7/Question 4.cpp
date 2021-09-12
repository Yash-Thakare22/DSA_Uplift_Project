#include <iostream>
using namespace std;
int main()
{
    long int n;
    cout<<"Enter the no.";
    cin >> n;
    cout << ((n << 1) + n + (n >> 1));
    return 0;
}
