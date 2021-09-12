#include <iostream>
using namespace std;

int main()
{
	int arr[]={4,3,5,5,4,4,5};
	int i,one = 0,s = 0, two = 0;
	
	for(int i=0;i<7;i++){
		two = two | (one & arr[i]);
		one = one ^ arr[i];
		s = ~(one & two);
		one &= s;
		two &= s;		
}
	
	cout << one;
	return 0;
}
