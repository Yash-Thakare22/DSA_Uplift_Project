/*  Write a program to add one to a given number. You are allowed to use only bitwise operator

I/P:
30

O/P:
31   */

#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a = 1;
	while(n&a){
		n = n^a;
		a <<= 1; 
	}
	n = n^a;
	cout << n;
	
	return 0;
}
