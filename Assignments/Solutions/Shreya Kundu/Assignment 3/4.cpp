/*Question 4:Given a square matrix, rotate the matrix by 180 degree.
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
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	   cin>>a[i][j];
	for(int i=0;i<n;i++)
	 for(int j=0;j<n/2;j++)
	    swap(a[i][j],a[i][n-1-j]);
	for(int i=0;i<n/2;i++)
	 for(int j=0;j<n;j++)
	    swap(a[i][j],a[n-1-i][j]);
	for(int i=0;i<n;i++)
	 {
	  for(int j=0;j<n;j++)
	  cout<<a[i][j]<<" ";
	 cout<<"\n";}
	return 0;
}
