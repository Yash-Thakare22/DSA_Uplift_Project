#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k, index;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
	    cin >> arr[i];

    for(int i = 0; i < n; i++) {
	    if(arr[i] == k && arr[i + 1] != k) {
	        index = i;
	        break;
	    }
	}
	
	cout << index;

    return 0;
}
