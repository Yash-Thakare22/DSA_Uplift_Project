#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    vector<int>vect;
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
	cin>>b[i];
	for(int i=0;i<n;i++){
	    if(a[i]!=a[i+1]){
	       
	    for(int j=0;j<m;j++){
	       if(a[i]==b[j]) {
	       vect.push_back(a[i]);
	       break;}
	    }
	    }
	}for(int i=0;i<vect.size();i++)
	cout<<vect[i]<<" ";
	return 0;
}