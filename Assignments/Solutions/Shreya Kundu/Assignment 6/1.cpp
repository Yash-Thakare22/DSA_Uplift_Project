/*
Question 1: Given an integer array and another integer element. The task is to find if the given element is present in array or not.
Example 1:
Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	   cin>>a[i];
	cin>>x;
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{cout<<i;
		break;
		}
	 } 
	 if(i==8)
	  cout<<"Not found";
	return 0;
}
