#include <iostream>

using namespace std;

int main()
{
    int n,temp;
    cout<<"Enter number of elements";
    cin>>n;
    int a[n],arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        a[i+1]=arr[i];
    }
    a[0]=arr[n-1];
    for (int i = 0; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
