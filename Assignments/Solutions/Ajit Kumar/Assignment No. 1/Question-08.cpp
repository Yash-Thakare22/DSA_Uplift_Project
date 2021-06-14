/*
Question 8:
 * * * * *
   * * *
    * *
     *
     
*/     


#include <iostream>
using namespace std;
 
#include <iostream>
using namespace std;
int main()
{
    int i, j , n=5;

    for (i = 0; i <= n; i++)
    {
        //print spaces in increasing order
        for (j = 1; j <= i; j++)
            cout << " ";

            //print * in decreasing order
        for (j = n - i + 1; j > 1; j--)
            cout << "* ";

        cout << endl;
    }
    return 0;
}