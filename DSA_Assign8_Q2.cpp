#include <iostream>
using namespace std;

#define N 5

int countZeroes(int mat[N][N])
{

	int row = N - 1, col = 0;

	int count = 0;

	while (col < N)
	{
		while (mat[row][col])

			if (--row < 0)
				return count;


		count += (row + 1);


		col++;
	}

	return count;
}
int main()
{
	int mat[N][N] =
	{
		{ 0, 0, 0, 0, 1 },
		{ 0, 0, 0, 1, 1 },
		{ 0, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1 }
	};

	cout << countZeroes(mat);

	return 0;
}
