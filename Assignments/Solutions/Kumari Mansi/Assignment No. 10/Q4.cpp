/*Question 4
https://www.geeksforgeeks.org/decimal-binary-number-using-recursion/
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;
string decimal(int n)
{

    string p = to_string(n % 2);
    if (n <= 1)
        return p;
    return decimal(n / 2) + p;
}
int main()
{
    int n;
    cin >> n;
    string str = decimal(n);
    cout << str;
    return 0;
}