#include <iostream>
using namespace std;

int main()
{
    int n,flag;
    cout << "Enter number of elements";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    { 
          flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]==1 && arr[j+1]==0)
            {
                arr[j]=0;
                arr[j+1]=1;
                flag=1;
            }
            
        }
        if (flag == 0)
            break;
    }

    for (int i = 0; i < n; i++)
        cout<< arr[i];

    return 0;
}
