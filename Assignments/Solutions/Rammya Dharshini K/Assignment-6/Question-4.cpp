/* Given a sorted array of positive integers (elements may be repeated) and a number x. The task is to find the rightmost index of x in the given array.

Input :
N = 10
arr[] = {1,1,2,2,3,4,5,5,6,7}
x = 1

Output  : 
1  */

#include<iostream>

using namespace std;

int Search(int a[], int l, int r, int x){
		while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == x)
            return m;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
	
}

int main(){
	int n,x,i;
	cin >> n;
	int a[n];
	
	for(i=0;i<n;i++)
		cin >> a[i];
		
	cin >> x;
	
    int pos = Search(a, 0, n-1, x);
 
    
    if (pos != -1)
        cout << pos;
    else
        cout << "Element not found.";
	
	return 0;
}
