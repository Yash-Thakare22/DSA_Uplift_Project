#include <iostream>
using namespace std;

    int maxi(int a[],int n)
    {
        if (n == 1)
            return a[0];
        
        else 
           return max(a[n - 1], maxi(a, n - 1));
    }

    int mini(int a[], int n)
    {
        if (n == 1)
            return a[0];

        else
            return min(a[n - 1], mini(a, n - 1));
    }
int main()
{
    int m;
    cout<<"Enter number to be checked";
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum element is"<<maxi(arr,m)<<endl;
    cout << "The minimum element is" << mini(arr,m) << endl;

    return 0;
}
