/*
Question 2: Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.
Input: 
N = 5, K = 3
arr[] = {3,5,4,2,9}
Output: 
4
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	   cin>>a[i];
    for(int i=0;i<n-1;i++)
       for(int j=i+1;j<n;j++)
         if(a[j]<a[i])
           swap(a[i],a[j]);
    cout<<a[k-1];
	return 0;
}
