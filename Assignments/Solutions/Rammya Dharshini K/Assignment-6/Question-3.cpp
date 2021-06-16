/*  Given a sorted array of size N and an integer K. Check if K is present in the array or not.

Input:
N = 5, K = 6
arr[] = {1,2,3,4,6}

Output: 1 */

#include<iostream>

using namespace std;

int Search(int a[], int l, int r, int k){
	while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == k)
            return m;
        if (a[m] < k)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main(){
	int n,k,i;
	cin >> n;
	int a[n];
	
	for(i=0;i<n;i++)
		cin >> a[i];
		
	cin >> k;
	
	int pos = Search(a, 0, n - 1, k);
    if(pos == -1)
		cout << "0";
	else
        cout << pos;
                   
	return 0;
}
