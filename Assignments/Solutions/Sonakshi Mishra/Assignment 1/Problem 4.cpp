#include <iostream>
using namespace std;

int main()
{
    int i, j, n=3;//n is half the number of the rows for 

   
   for(i = 0; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
        ;
    }
}