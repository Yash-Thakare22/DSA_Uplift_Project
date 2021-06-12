#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int s=0,max=-29999;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	 {
	  for(int j=i;j<n;j++)
	  {
		s+=a[j];
		if(max<s)
		max=s;
	  }s=0;
	  }
	cout<<max;
	return 0;
}
