/*  Given an integer array and another integer element. The task is to find if the given element is present in array or not.

Input:
n = 4
arr[] = {1,2,3,4}
x = 3

Output: 2  */

#include<iostream>

using namespace std;

int search(int a[],int n, int x){
	int i;
    for (i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

int main(){
	int n,x,i,p;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	cin >> x ;
	p = search(a,n,x);
	if (p == -1)
        cout << "Element is not present in the array";
    else
        cout << p;
	return 0;
}
