#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	 for(int i=1;i<n;i++)
	  for(int j=i-1;j>=0;j--)
	      if(a[j]*a[j+1]<0 && a[j]>a[j+1])
	      swap(a[j],a[j+1]);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
