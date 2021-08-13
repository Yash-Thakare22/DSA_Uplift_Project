#include <iostream>

using namespace std;

int main()
{
    int j=0,end,n;
    cout<<"Enter number of elements";
    cin>>n;
    int arr[n],a[n];
    end=n-1;
    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            {
                a[j]=arr[i];
                j++;
            }
        else 
            {
                a[end]=arr[i];
                end--;
            }
    }
    for (int k = 0; k < n; k++)
    {
        cout<< a[k]<<" ";
    }

    return 0;
}
