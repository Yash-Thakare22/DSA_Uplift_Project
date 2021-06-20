  
#include <iostream>

using namespace std;

int main()
{
    int n=6;

    for (int i = 1; i <= n; i++)
    {
        int bincoeff = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << bincoeff<<" ";
            bincoeff = (bincoeff * (i - j) / j);
        }

        cout << endl;
    }

    return 0;
}