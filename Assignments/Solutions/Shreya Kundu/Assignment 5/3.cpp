/*
Question 3: The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection

Input: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int a1[n];
	for(int i=0;i<n;i++)
	   cin>>a1[i];
	cin>>m;
	int a2[m];
	for(int i=0;i<m;i++)
	   cin>>a2[i];
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        if(a1[i]!=a1[i+1]&&a2[j]!=a2[j+1])
        {
        	if(a1[i]==a2[j])
        	cout<<a1[i]<<" ";
		}
	return 0;
}
