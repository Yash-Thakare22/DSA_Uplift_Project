/*  Given an integer n, find whether it is a power of 4 or not

I/P :
16

O/P :
Yes */ 

#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	(n!=0 && (n&(n-1))==0) ? cout << "YES" : cout << "NO";
	return 0;
}
