#include<bits/stdc++.h>
using namespace std;
	int n;

void isprime(int x){
	if(x==n)
	  {cout<<"Yes";
	   return;
	  }
	if(n%x==0)
	  {cout<<"No";
	  return;}
	else
	  isprime (x+1); 
	  
}
int main(){
		cin>>n;
	int i=2;
	isprime(i);
	return 0;
}
