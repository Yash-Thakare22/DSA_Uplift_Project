#include <bits/stdc++.h>
using namespace std;

int addOne(int x)
{
	return (-(~x));
}
int main()
{
	cout<<addOne(13);
	return 0;
}
