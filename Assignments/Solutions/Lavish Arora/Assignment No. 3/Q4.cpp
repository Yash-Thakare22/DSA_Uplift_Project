#include<iostream>

using namespace std;

int main(){
	int i,j;
	
	int a[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
			
	for(i=0;i<4;i++){
		int j=0,k=3;
		while(j<k){
			int t;
			t = a[i][j];
			a[i][j] = a[i][k];
			a[i][k] = t;
			j++;
			k--;
		}
	}
			
	for(i=0;i<4;i++){
		int j=0,k=3;
		while(j<k){
			int t;
			t = a[j][i];
			a[j][i] = a[k][i];
			a[k][i] = t;
			j++;
			k--;
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++)
			cout << a[i][j] << "  ";
		cout << endl;
	}
			
	return 0;
}