#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	   cin>>a[i][j];
	cout<<"Principal Diagonal:";
	for(int i=0;i<n;i++)
	   cout<<" "<<a[i][i];
	cout<<"\nSecondary Diagonal:";
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	   {
	   if((i+j)==(n-1))
	      cout<<" "<<a[i][j];
	   }
	return 0;
}
