#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int k=0;int l=0;
    while(k<m && l<n)
    {
        for(int i=l;i<m;i++)
        {
            cout<<arr[k][i]<<" ";
        }
        k++;
        
        for(int i=k;i<n;i++)
        {
            cout<<arr[i][n-1]<<" ";
        }
        n--;
        
        if (k < m) {
            for (int i = n - 1; i >= l; i--) {
                cout<<arr[m - 1][i]<<" ";
            }
            m--;
        }

        if (l < n) {
            for (int i = m - 1; i >= k; i--) {
                cout<<arr[i][l]<<" ";
            }
            l++;
        }
}
return 0;
}
