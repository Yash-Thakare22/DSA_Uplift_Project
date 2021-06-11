#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        int s = (2 * n) - ((2 * i) + 1);
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            if (j == n)
            {
                for (j = n - 1; j > 0; j--)
                {
                    cout << j;
                    break;
                }
            }
            else
            {
                cout << j;
            }
        }

        cout << endl;
    }

    return 0;
}
