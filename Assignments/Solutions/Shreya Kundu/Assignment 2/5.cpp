#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int min=n-1;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
	    {if(a[i]==a[j]){	  
		if(i<min)
		min=i;}
		}
	cout<<a[min];
	return 0;
}
