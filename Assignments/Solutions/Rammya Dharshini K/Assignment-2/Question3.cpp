/* Given an array, cyclically rotate the array clockwise by one

I/P:
1 2 3 4 5

O/P:
5 1 2 3 4 */

#include<iostream>

using namespace std;
int main(){
	int n,i,temp;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
		
	temp = a[n-1];
	for(i=n-1;i>=0;i--)
		a[i]=a[i-1];
	
	a[0] = temp;
	for(i=0;i<n;i++)
		cout << a[i];
	
	return 0;
}
