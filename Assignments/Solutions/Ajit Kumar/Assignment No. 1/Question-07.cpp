/*Question 7

1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1

*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, num = 1;
    int n=6;
    cout << num << "\n";
    
    for (i = 1; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0)
                num = 1;
            else
                num = num * (i - j + 1) / j;
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}