/*   Given a 2D array arr[][] of size M x N integers where M is the number of rows and N is the number of columns. The task is to reverse every row of the given 2D array.

Example: 
 
Input: arr[][] = 
{ {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9} }
  
Output:
3 2 1
6 5 4
9 8 7  */

#include<iostream>

using namespace std;

int main(){
	int i,j;
	int a[3][3]={ {1,2,3}, {4,5,6}, {7,8,9} };
			
	for(i=0;i<3;i++){
		int j=0,k=2;
		while(j<k){
			int t;
			t = a[i][j];
			a[i][j] = a[i][k];
			a[i][k] = t;
			j++;
			k--;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}
