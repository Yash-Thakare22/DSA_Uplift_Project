/*  Given an array arr[] of integers, find the first repeating element in it. 
We need to find the element that occurs more than once and whose index of first occurrence is smallest

I/P:
5 10 40 4 6 5 10

O/P:
5 (5 is the first element that repeats)    */

#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				cout << a[j];
				return 0;
			}
		}
	}
	cout << "No repating element in an array" ;
	return 0;
}
