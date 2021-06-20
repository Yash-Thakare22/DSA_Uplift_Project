#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        count++;
        else if(arr[i]==0)
        break;
    }
    cout<<count;
    return 0;
}
