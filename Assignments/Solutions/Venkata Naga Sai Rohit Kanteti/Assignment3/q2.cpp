/*

Given a 2D array arr[][] of size M x N integers where M is the number of rows and N is the number of columns. The task is to reverse every row of the given 2D array.
Example: 
 

Input: arr[][] = 
{ {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9} }
Output:
3 2 1
6 5 4
9 8 7

*/



#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}




int main()
{
	int arr[100][100],M,N,i,j;
	cin>>M>>N;
	for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>arr[i][j];
        }
    }
     
     	for (int i = 0; i < M; i++) {


		int s = 0;
		int e = N - 1;

	
		while (s < e) {

	
			swap(&arr[i][s],&arr[i][e]);

	
			s++;
			e--;
		}
	}
   
    cout<<"Matrix with every row reversed"<<endl;
	
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
