/* Program to print the following pattern

1           1
1 2       2 1
1 2 3   3 2 1
1 2 3 4 3 2 1

*/

#include<iostream>

using namespace std;

int main(){
	int n,j,i;
	cin >> n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			cout << j << " ";
			
		for(j=2*(n-i);j>1;j--)
			cout << " ";
			
		for(j=2*(n-i);j>1;j--)
			cout << " ";	
			
		for(j=i;j>=1;j--){
			if(j==n)
				continue;
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
