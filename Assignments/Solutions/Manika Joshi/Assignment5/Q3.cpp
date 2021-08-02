#include <iostream>
using namespace std;

int main()
{
    int n, j, m;
    cout << "Enter number of elements for array1";
    cin >> n;
    cout << "Enter number of elements for array2";
    cin >> m;
    int arr[n],a[m];

    cout << "Enter elements for array1";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Enter elements for array 2";
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        j=0;
        while(a[j]<=arr[i] && j<m)
        {
            if(a[j]==arr[i])
                cout<<a[j]<<" ";
            
            j++;
        }
    }


    return 0;
}
