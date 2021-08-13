/*
Question 3: The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection

Input: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,z=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    int s[10];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i] == b[j]) {s[z] = a[i];z++;}
        }
    }
    for(int i=0;i<z;i++) 
    	cout<<s[i]<<" ";
    return 0;
}

