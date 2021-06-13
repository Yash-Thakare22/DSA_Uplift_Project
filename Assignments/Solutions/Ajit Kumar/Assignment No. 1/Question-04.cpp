/*
Question4.
     *
    * *
   * * *
    * *
     *
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, n=3;
    //cin >> n;
    //symmetric at row 3

    for (i = 0; i <= n; i++)
    {
        // Print spaces in decreasing order
        for (j = 1; j <= n - i; j++)
            cout << " ";

        // Print star in increasing order    
        for (j = 1; j <=i; j++){
            cout << "* ";
        }    
        cout << endl;
    }


    for (i = n - 1; i >= 1; i--)
    {
        // Print spaces in increasing order 
        for (j = 1; j <= n - i; j++)
            cout << " ";

        // Print star in decreasing order     
        for (j = 1; j <=i; j++){
            cout << "* ";
        }    
        cout << endl;
    }
    return 0;
}