//question 5
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cout << "Enter the number of rows : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i>=j)
                cout << j;
            else
                cout << " ";
        }
        for (j = n; j >= 1; j--)
        {
            if (j <= i)
                cout << j;
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
