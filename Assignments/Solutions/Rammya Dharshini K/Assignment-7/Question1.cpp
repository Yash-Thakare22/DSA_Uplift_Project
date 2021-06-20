/*  Given an i/p array where every element occurs three times, except one element which occurs only once . Find that element

I/P :
4 3 5 5 4 4 5

O/P :
3       */

#include<iostream>

using namespace std;

int main(){
	int a[]={4,3,5,5,4,4,5};
	int i,one = 0,s = 0, two = 0;
	
	for(int i=0;i<7;i++){
		two = two | (one & a[i]);
		one = one ^ a[i];
		s = ~(one & two);
		one &= s;
		two &= s;		
	}
	
	cout << one;
	return 0;
}
