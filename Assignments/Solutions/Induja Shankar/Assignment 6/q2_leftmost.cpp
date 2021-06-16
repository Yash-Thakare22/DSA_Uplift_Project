#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
	int arr[n], index;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

	for(int i = 0; i < n; i++) {
	    if(arr[i] == target && arr[i - 1] != target) {
	        index = i;
	        break;
	    }
	}
	
	cout << index;
	
	return 0;
}
