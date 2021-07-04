#include<bits/stdc++.h>
using namespace std;
int convert(int n1){
	if(n1==0)
	return 0;
	return (convert(n1/2)*10 +n1%2);
}
int main(){
	int n;
	cin>>n;
	cout<<convert(n);
	return 0;
}
