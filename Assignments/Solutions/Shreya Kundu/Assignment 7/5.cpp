#include<bits/stdc++.h>
using namespace std;
    
int main(){
	int n;
	cin>>n;
    int m=1;
    
    while(n&m){ 
	  n=n^m;
      m<<=1;
    }
    n=n^m;
    
	cout<<n;
	return 0;
}
