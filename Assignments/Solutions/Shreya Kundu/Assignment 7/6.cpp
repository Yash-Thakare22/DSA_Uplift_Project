#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x=n,i=-1;
	while(x){
	
		i++;
		if(x&(1<<i)!=0)
		break;
		x>>=1;
	}
	cout<<i+1;
	return 0;
	
}
