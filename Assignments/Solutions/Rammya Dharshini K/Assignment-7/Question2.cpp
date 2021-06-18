/*  Given two i/p signed integers, write function that returns true if the signs of given integers are different, otherwise false

I/P:
-4 +5

O/P:
True  */

#include<iostream>

using namespace std;

int main(){
	int a,b;
	cin >> a;
	cin >> b;
	((a^b)<0)?cout << "True": cout << "False";
	return 0;
}
