#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows/columns";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
            
            cout<<"Principal diagonal is";
     for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(i==j)
                cout<<arr[i][j]<<" ";
        }cout<<endl;
        
        cout<<"Secondary diagonal is";
        
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(j==n-1-i)
                cout<<arr[i][j]<<" ";
        }
            
    return 0;
}
