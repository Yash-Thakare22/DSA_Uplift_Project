/*  Write a one line function to return position of first 1 from right to left, in binary representation of an integer

I/P:
18 (010010)

O/P:
2  */ 

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int x;
	cin >> x;
	
	cout << log2(x & (-x)) + 1;
		
	return 0;
}
