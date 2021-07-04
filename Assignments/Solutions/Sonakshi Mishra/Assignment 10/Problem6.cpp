// print the given pattern recursively
#include <bits/stdc++.h>
 
using namespace std;

void PatternRecursion(int n, int base=1)
{
    if (n < 1)
        return;
     
    if (base <= n)
    {
        cout << "* ";
         
        PatternRecursion(n, base + 1);
    }   
     
    else
    {
        cout << endl;
        PatternRecursion(n-1, 1);
    }
}
 
int main()
{
    int n;
    cin>>n;
    PatternRecursion(n);
    return 0;   
}
