/*  Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.
Input: 
5
1 0 1 1 0
Output:
0 0 1 1 1  */

#include<iostream>

using namespace std;

int main(){
	int i,j,n,t;
	cin >> n;
	int a[n];
	int flag;
	
	for(i=0;i<n;i++)
		cin >> a[i];
		
	for(i=0;i<5;i++){
		flag = 0;
		for(j=0;j<4;j++){
			if(a[j]>a[j+1]){
				t =a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flag = 1;
			}
		}
		if(flag==0){
			break;
		}
	}
	for(i=0;i<5;i++)
		cout << a[i] << " ";
	return 0;
}
