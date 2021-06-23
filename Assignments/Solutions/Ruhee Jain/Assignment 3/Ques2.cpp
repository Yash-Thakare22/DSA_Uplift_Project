/*

Question2:
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


#include <iostream>
using namespace std;

const int m = 3;
const int n = 3;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void reverseArray(int arr[m][n])
{
	for (int i = 0; i < m; i++) {

		int start = 0;
		int end = n - 1;
    
		while (start < end) {
			swap(&arr[i][start],
				&arr[i][end]);
        
			start++;
			end--;
		}
	}
    cout<<"Matrix after reversing every row: "<<endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}
int main()
{   
	int arr[m][n];
	
		for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin>>arr[i][j];
		}
		cout << endl;
	}
	    cout<<"Original Matrix: "<<endl;
		for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
    cout<<endl;
	reverseArray(arr);
	return 0;
}
