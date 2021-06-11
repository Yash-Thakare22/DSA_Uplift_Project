#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 1, n = 4;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}