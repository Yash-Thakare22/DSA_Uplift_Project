#include<bits/stdc++.h>
using namespace std;
int maxEl(int a[],int n){
	if(n==0)
	return a[n];
	return max(a[n],maxEl(a,n-1));
}
int minEl(int a[],int n){
	if(n==0)
	return a[n];
	return min(a[n],minEl(a,n-1));
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	   cin>>a[i];
	cout<<maxEl(a,n-1)<<"\n";
	cout<<minEl(a,n-1);
	return 0;
}
