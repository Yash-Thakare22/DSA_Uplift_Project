Question 1: Print transpose of matrix
#include <stdio.h>
#define N 4

void transpose(int A[][N], int B[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			B[i][j] = A[j][i];
}

int main()
{
	int A[N][N] = { {1, 1, 1, 1},
					{2, 2, 2, 2},
					{3, 3, 3, 3},
					{4, 4, 4, 4}};

	int B[N][N], i, j;

	transpose(A, B);

	printf("Result matrix is \n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		printf("%d ", B[i][j]);
		printf("\n");
	}

	return 0;
}

____________________________________________________________________________________________________________________________________________________________________________
Question 2:

#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

void printPrincipalDiagonal(int mat[][MAX], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			// Condition for principal diagonal
			if (i == j)
				cout << mat[i][j] << ", ";
		}
	}
	cout << endl;
}

void printSecondaryDiagonal(int mat[][MAX], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
    
			if ((i + j) == (n - 1))
				cout << mat[i][j] << ", ";
		}
	}
	cout << endl;
}

int main()
{
	int n = 4;
	int a[][MAX] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 1, 2, 3, 4 },
					{ 5, 6, 7, 8 } };

	printPrincipalDiagonal(a, n);
	printSecondaryDiagonal(a, n);
	return 0;
}

_______________________________________________________________________________________________________________________________________________________________________________

Question 3:
#include <bits/stdc++.h>
using namespace std;

const int M = 3;
const int N = 3;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void reverseArray(int arr[M][N])
{
	for (int i = 0; i < M; i++) {

		int start = 0;
		int end = N - 1;
    
		while (start < end) {
			swap(&arr[i][start],
				&arr[i][end]);
        
			start++;
			end--;
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}
int main()
{
	int arr[][3] = { { 1, 2, 3 },
					{ 4, 5, 6 },
					{ 7, 8, 9 } };

	reverseArray(arr);
	return 0;
}
