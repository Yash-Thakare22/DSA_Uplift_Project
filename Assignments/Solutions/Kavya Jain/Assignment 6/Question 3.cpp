#include <iostream>

using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        
        if (arr[m] == x)
            return 1;
 
        
        if (arr[m] < x)
            l = m + 1;
 
        
        else
            r = m - 1;
    }
 
    
    return -1;
}

int main()
{
    int n,i,k;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    cout<<binarySearch(arr,0,n-1,k);
    //1 output is displayed when elment found and -1 when the element is not found
   
}
