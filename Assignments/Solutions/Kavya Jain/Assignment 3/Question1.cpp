#include<iostream>
using namespace std;
int main()
{ 
    int i,j,n;
    cout<<"Enter no of rows of square matrix";
    cin>>n;
    int arr[n][n];
    cout<<"Enter array";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The elements of principal diagonal are";
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(i==j)
           cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"The elements of secondary diagonal are";
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(i+j==n-1)
           cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}
