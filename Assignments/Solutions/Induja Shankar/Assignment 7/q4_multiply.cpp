#include <bits/stdc++.h>
using namespace std;

int multiply(int x) 
{ 
    return (x << 1) + x + (x >> 1); 
}  
  
int main()
{
    int n;
    cin >> n;
    cout << multiply(n);
	return 0;
}

