#include<bits/stdc++.h>
using namespace std;
int power(long long x,int y, int p)
{
	int res = 1;
	x = x % p;
	if (x == 0) return 0;
	while (y > 0)
	{
		if (y & 1)
			res = (res*x) % p;
		y = y>>1; 
		x = (x*x) % p;
	}
	return res;
}
int main()
{
	int x;
  int y;
	int p;
  cin>>x>>y>>p;
	return power(x, y, p);
}
