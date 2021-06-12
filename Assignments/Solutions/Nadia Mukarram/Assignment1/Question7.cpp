#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int coeff = 1;//As each row starts with the value 1
        for (int j = 1; j <= i; j++)
        {
            cout << coeff;
            coeff = (coeff * (i - j) / j);
        }

        cout << endl;
    }

    return 0;
}
