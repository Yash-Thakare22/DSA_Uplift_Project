/*
Question 4: Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.

Input:
N = 5
S = "edsab"
Output:
abdes
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
    char a[n+1];
	for(int i=0;i<n;i++)
	   cin>>a[i];
	int k=96;
	for(int i=0;i<n;i++)
	 k=max(k,(int)a[i]);
	int c[k-96]={0};
	for(int i=0;i<n;i++)
		c[a[i]-96]++;
	for(int i=1;i<=k-96;i++)
	    c[i]+=c[i-1];
	char ans[n+1];
	for(int i=n-1;i>=0;i--)
	   ans[--c[a[i]-96]]=a[i];
	ans[n]='\0'; 
	for(int i=0;i<n;i++)
	cout<<ans[i];
	return 0;
}
