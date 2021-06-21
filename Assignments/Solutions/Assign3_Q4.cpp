#include <bits/stdc++.h>
#define N 3
using namespace std;


void rotateMatrix(int mat[][N])
{

	for (int i = N - 1; i >= 0; i--) {
		for (int j = N - 1; j >= 0; j--)
			printf("%d ", mat[i][j]);

		printf("\n");
	}
}


int main()
{
	int mat[N][N] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	rotateMatrix(mat);
	return 0;
}