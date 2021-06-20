/*
Question 1:Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.
Input: 
5
1 0 1 1 0
Output:
0 0 1 1 1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	   cin>>a[i];
	int j=0;
	for(int i=0;i<n;i++){
		if(a[i]==0)
		  swap(a[i],a[j++]);
	}
	for(int i=0;i<n;i++)
	   cout<<a[i]<<" ";
	return 0;
}
