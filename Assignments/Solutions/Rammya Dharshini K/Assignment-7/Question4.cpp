/* Given an integer x, write a function that multiplies x with 3.5 and returns the integer result. 
You are allowed to use only bitwise operator

I/P:
5 

O/P:
17  */ 

#include<iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	
	cout << (x>>1) + x + (x<<1);  // 2*x + x + x/2
	
	return 0;
}
