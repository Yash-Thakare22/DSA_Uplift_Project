
/*

1
2 3
4 5 6
7 8 9 10


*/



#include<bits/stdc++.h>
using namespace std;
void read_write()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    read_write();

	int n,k=1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=i ; j++)
		{
			cout << k <<" ";
            k++;
		}
		cout << endl;
	}
}