//Given a number n, check whether it’s prime number or not using recursion.
#include <iostream>
using namespace std;

bool prime(int n,int m)
{
    if (n == 1)
        return true;

    else if (n == 0)
        return false;

    else if(m > 1)
    {

            if (n % m == 0)
                return false;

            else
                return (prime(n, m - 1));
    }
    else
        return true;
}

    int main()
    {
        int m;
        cout << "Enter number of elements";
        cin >> m;
        if (prime(m, m / 2))
            cout<<"Yes";
        else 
            cout<<"No";
        

            return 0;
}
