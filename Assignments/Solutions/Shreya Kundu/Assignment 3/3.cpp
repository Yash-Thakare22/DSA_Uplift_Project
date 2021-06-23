#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
	 for(int j=0;j<n;j++)
	   cin>>a[i][j];
    int r_strt=0,r_end=m-1,c_strt=0,c_end=n-1;
    for(int i=c_strt;i<=c_end;i++)
       cout<<a[r_strt][i];
    r_strt++;
    for(int i=r_strt;i<=r_end;i++)
       cout<<a[i][c_end];
    c_end--;
    for(int i=c_end;i>=c_strt;i--)
       cout<<a[r_end][i];
    r_end--;
    for(int i=r_end;i>=r_strt;i--)
       cout<<a[i][c_strt];
    c_strt++;
    
	return 0;
}
