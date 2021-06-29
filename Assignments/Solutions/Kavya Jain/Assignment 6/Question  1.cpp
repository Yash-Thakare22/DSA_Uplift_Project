#include <iostream>

using namespace std;

int main()
{
    int n,i,x;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
     for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        cout<<i;
    }
    
}
