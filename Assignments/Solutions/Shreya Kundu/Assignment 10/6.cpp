#include<bits/stdc++.h>
using namespace std;
	int N;
void patt(int i,int n){
	if(i==N){
		cout<<"*";
		return ;
	}
	for(int j=n;j>=1;j--){
		cout<<"* ";
	}
	cout<<"\n";
	patt(i+1,n-1);
}
int main(){
	cin>>N;
	int i=1;
    patt(i,N);
	return 0;
}
