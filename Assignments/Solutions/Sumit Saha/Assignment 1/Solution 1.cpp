/*
Question 1
             *  *  *  *  *
          *  *  *  *  *
       *  *  *  *  *
    *  *  *  *  *
 *  *  *  *  *
 
*/


#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, j, rows, columns;

    cout << "Enter the no of rows\n";

    cin >> rows;

    cout << "Enter the no of columns\n";

    cin >> columns;

    cout << endl;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= columns; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
