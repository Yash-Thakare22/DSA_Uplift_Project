/* Given a sorted array of positive integers (elements may be repeated) and a number x. The task is to find the leftmost index of x in the given array.

Input:
N = 10
arr[] = {1,1,2,2,3,4,5,5,6,7}
x = 1
Output: 0 */

#include<iostream>

using namespace std;
int search(int a[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

int main(){
	int n,x,i;
	cin >> n;
	int a[n];
	
	for(i=0;i<n;i++)
		cin >> a[i];
		
	cin >> x;
	
	int index = search(a, n, x);
	
    if (index == -1)
        cout << "Element is not present in the array";
    else
        cout << index;
	
	return 0;
}
