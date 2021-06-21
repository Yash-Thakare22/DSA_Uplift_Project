#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        if (n % 4 == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
        n = n / 4;
    }
    cout << "NO" << endl;

    return 0;
}
