#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
	 for(int j=0;j<n;j++)
	   cin>>a[i][j];
	for(int i=0;i<m;i++)
	 for(int j=0;j<n/2;j++)
	  swap(a[i][j],a[i][n-1-j]);
	for(int i=0;i<m;i++)
	 {
	 for(int j=0;j<n;j++)
	   cout<<a[i][j]<<" ";
	 cout<<"\n";
}
	return 0;}
