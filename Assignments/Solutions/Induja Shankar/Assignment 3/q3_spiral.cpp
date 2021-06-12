#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[5][5] = { { 1,   2,  3,  4, 5 },
					{ 16, 17, 18, 19, 6 },
					{ 15, 24, 25, 20, 7 },
					{ 14, 23, 22, 21, 8 },
	                { 13, 12, 11, 10, 9 }};
	
	int i, k = 0, l = 0, m = 5, n = 5;

	while (k < m && l < n) {
		for (i = l; i < n; ++i)
			cout << a[k][i] << " ";
		k++;

		for (i = k; i < m; ++i)
			cout << a[i][n - 1] << " ";
		n--;

		if (k < m) {
			for (i = n - 1; i >= l; --i)
				cout << a[m - 1][i] << " ";
			m--;
		}

		if (l < n) {
			for (i = m - 1; i >= k; --i)
				cout << a[i][l] << " ";
			l++;
		}
	}
	
	return 0;
}
