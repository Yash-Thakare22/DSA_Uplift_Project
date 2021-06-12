/* Program to print the below pattern 

1
2 3
4 5 6
7 8 9 10  */

#include<iostream>

using namespace std;

int main(){
	int n,i,j,c=1;
	cin >> n;
	for(i=0;i<n;i++){
		for(j=i;j<2*i+1;j++){
			cout << c << " " ;
			c++;
		}
		cout << endl ;
	}
	return 0;
}
