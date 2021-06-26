#include <bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int n, int k)
{

    // Sort the given array

    sort(arr, arr + n);
 

    // Return k'th element in the sorted array

    return arr[k - 1];
}

int main()
{

    int arr[100],n,k;

    cin>>n;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cin>>k;

    cout << "K'th smallest element is " << kthSmallest(arr, n, k);

    return 0;
}