#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << ++c << " ";
        }

        cout << endl;
    }

    return 0;
}
