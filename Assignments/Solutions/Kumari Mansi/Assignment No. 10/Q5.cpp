/*Question 5
https://www.geeksforgeeks.org/recursive-program-prime-number/
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;
bool prime_number(int n, int i = 2)
{
    if (n <= 2)
        return false;

    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    prime_number(n, i + 1);
}
int main()
{
    int n;
    cin >> n;
    if (prime_number(n))
        cout << "It is a prime number";
    else
        cout << "It is not a prime number";
    return 0;
}