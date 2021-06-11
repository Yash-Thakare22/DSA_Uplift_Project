/* Program to print the following pattern

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5            */

#include<iostream>

using namespace std;

int main(){
	int i,j,n;
	cin >> n;
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--)
			cout << j;
		cout << endl;
	}
	return 0;
}
