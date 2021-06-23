/*
Question2

* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
*/

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n=5;
    //cin >> n;
    cout << endl;

    // symmetric at row 5.

    //run the loop till row 5. 
    for (i = 0; i < n; i++)
    {
        //length of columns 
        for (j = 0; j < (2 * n); j++)
        {
            //condition for printing star and blank 
            if (i + j <= n - 1)
                cout << "*";    // // Print star in decreasing order 
            else
                cout << " ";    //// Print spaces in increasing order 

            if ((i + n) <= j)   // // Print star in decreasing order  
                cout << "*";
            else
                cout << " ";    //printing spaces 
        }
        cout << "\n";
    }

    //run the loop from rows 5 to 10.
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <(2 * n); j++)
        {
            // Print star in decreasing order 
            if (i >= j)
                cout << "*";    
            else
                cout << " ";

            // Print star in decreasing order 
            if (i >= (2 * n - 1) - j)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}

// This code is contributed by @_aj7t