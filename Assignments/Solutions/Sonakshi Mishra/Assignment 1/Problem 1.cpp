#include <iostream>
using namespace std;
int main()
{
    int n=5;
   
    for (int i = 1; i <= n;i++)
    {
        cout << string(n- i, ' ');
        cout << string(n, '*') << "\n";
    }
    return 0;
}