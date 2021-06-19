#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, result, count = 0;
    cin >> n;
 
    if(n && !(n&(n-1)))
    {
        while(n > 1)
        {
            n >>= 1;
            count += 1;
        }
 
        result = (count % 2 == 0)? 1 : 0;
    }
 
    if(result)
        cout << "Yes";
    else
        cout << "No";

	return 0;
}

