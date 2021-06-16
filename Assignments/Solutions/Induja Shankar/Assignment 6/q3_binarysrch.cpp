#include <bits/stdc++.h>
using namespace std;

int binary_srch(int arr[], int beg, int end, int ele)
{
    while (beg <= end) {
        int mid = beg + (end - beg) / 2;
        
        if(arr[mid] == ele)
            return 1;
        
        if(arr[mid] < ele)
            beg = mid + 1;
        else
            end = mid - 1;
    }
    
    return -1;
}
 
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
	    cin >> arr[i];

    cout << binary_srch(arr, 0, n - 1, k);

    return 0;
}
