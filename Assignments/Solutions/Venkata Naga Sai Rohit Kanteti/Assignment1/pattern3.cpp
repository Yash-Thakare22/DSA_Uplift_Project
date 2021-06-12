
/*

1
2 3
4 5 6
7 8 9 10


*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    read_write();

	int n,k=1;
        cout<<"enter n";
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
