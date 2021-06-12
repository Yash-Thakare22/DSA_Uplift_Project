/*
Question 4:Given a square matrix, rotate the matrix by 180 degree.
Input:
 
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16
 
Output:
 
16  15  14  13
12  11  10  9
8   7   6   5
4   3   2   1 
*/


#include <bits/stdc++.h>
using namespace std;

int n;


void reverseCols(int arr[][100])
{
	for (int i = 0; i < n; i++)
		for (int j = 0, k = n - 1; j < k; j++, k--)
			swap(arr[j][i], arr[k][i]);
}


void transposeMatrix(int arr[][100])
{
  for (int i = 0; i < n; i++)
  {
      for (int j = i+1; j < n; j++)
      {
          swap(arr[i][j], arr[j][i]);
      }
            
  }
        
}



int main()
{
	int arr[100][100],i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        cin>>arr[i][j];
	    }
	}
	transposeMatrix(arr);
	reverseCols(arr);
	transposeMatrix(arr);
	reverseCols(arr);
	cout<<"matrix rotated by 180 degrees is "<<endl;
     for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	return 0;
}
