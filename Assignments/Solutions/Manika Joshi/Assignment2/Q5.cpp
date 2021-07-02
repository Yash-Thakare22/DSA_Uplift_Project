#include <iostream>

using namespace std;

int main()
{
    int n,flag=0;
    cout<<"Enter number of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(arr[j]==arr[i])
            {
                cout<<arr[j];
                flag=1;
                break;
            }
        }
        if (flag = 1)
            break;
    }
    return 0;
}
