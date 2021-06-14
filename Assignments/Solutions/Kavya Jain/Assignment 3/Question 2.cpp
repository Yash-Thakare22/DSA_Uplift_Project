#include<iostream>
using namespace std;
int main()
{ 
    int i,j,n,m,temp;
    cout<<"Enter no of rows and colums of matrix";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter array";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
  for(i=0;i<m;i++)
    {
        for(j=0;j<(n/2);j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[i][n-1-j];
            arr[i][n-1-j]=temp;
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
