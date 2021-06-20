#include <iostream>
using namespace std;
bool isPowerOfFour(int n)
{
    return (!(n & (n - 1)) && (n % 3 == 1));
}
int main()
{
    int n;
    cout<<"Enter the no.";
    cin >> n;
    if (isPowerOfFour(n) == 1)
        cout << "TRUE";
    else
        cout << "NO";
    return 0;
}