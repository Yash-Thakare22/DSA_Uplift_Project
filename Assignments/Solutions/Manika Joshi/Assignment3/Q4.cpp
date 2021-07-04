#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>m;
    cin>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    for(int i=n-1;i>=0;i--)
    {

        for(int j=n-1;j>=0;j--)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}
