// 1           1
// 1 2       2 1
// 1 2 3   3 2 1
// 1 2 3 4 3 2 1
// Q5

#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++) cout << j << " ";
			
		for(int j=2*(4-i);j>1;j--) cout << " ";
			
		for(int j=2*(4-i);j>1;j--) cout << " ";	 

		for(int j=i;j>=1;j--){
			if(j==4) continue;
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}