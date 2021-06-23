#include <bits/stdc++.h>
using namespace std;

bool check_sign(int x, int y)
{
    return ((x ^ y) < 0);
}


int main()
{
	int a, b;
	cin >> a >> b;
	
	if(check_sign(a, b))
	    cout << "Signs different";
	else
	    cout << "Signs not different";

	return 0;
}

