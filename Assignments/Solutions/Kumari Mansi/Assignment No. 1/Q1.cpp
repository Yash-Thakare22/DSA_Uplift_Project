/*Question 1

             *  *  *  *  *
          *  *  *  *  *
       *  *  *  *  *
    *  *  *  *  *
 *  *  *  *  *

*/

#include <iostream>
using namespace std;
int main()
{
    int i, rows;
    cout << "Enter no. of rows=";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        cout << string(rows - i, ' ');
        cout << string(rows, '*') << "\n";
    }
    return 0;
}