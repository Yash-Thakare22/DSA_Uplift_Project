/*

Question 6

https://www.geeksforgeeks.org/print-given-pattern-recursively/

*/


#include <iostream>
using namespace std;

void printPattern(int n, int i)
{
    if (n < 1)
        return;
    if (i <= n)
    {
        cout<< "* ";
        printPattern(n, i + 1);
    }   
    else
    {   cout << endl;
        printPattern(n-1, 1);
    }
}
 
int main()
{
    int n;
    cin>>n;
    printPattern(n,1);
    return 0;
}
