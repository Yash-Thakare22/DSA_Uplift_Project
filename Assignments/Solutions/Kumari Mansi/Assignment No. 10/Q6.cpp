/*Question 6
https://www.geeksforgeeks.org/print-given-pattern-recursively/
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;
void pattern(int n)
{
    if (n == 1)
    {
        cout << '*';
        return;
    }
    for (int i = 0; i < n; i++)
        cout << '*' << " ";
    cout << endl;
    pattern(n - 1);
}
int main()
{
    int n;
    cin >> n;
    pattern(n);
    return 0;
}