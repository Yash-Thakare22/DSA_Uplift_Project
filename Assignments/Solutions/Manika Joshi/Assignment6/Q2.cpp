#include <iostream>
using namespace std;

int bin(int arr[],int l, int r, int x)
{
    while(l<=r)
    {
        int m=l+(r-1)/2;

        if(arr[m]==x)
            return m;
        if(arr[m]<x)
            l=m+1;
        else r=m-1;
    }
    return -1;
}
int main()
{
    int n, m;
    cout << "Enter size of array";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number to be found";
    cin >> m;

    int result=bin(arr,0,n-1,m);

    if(result==-1)
        cout<<"Element not found";
    else 
        cout<<"Element found at"<<result+1;
    
    return 0;
}
