#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    if(n%2!=0)
    {
        for (int j = 0; j < n/2; j++) {
            int temp=arr[n/2][j];
            arr[n/2][j]=arr[n/2][n-j-1];
            arr[n/2][n-j-1]=temp;
            }
    }
    
    for(int i=0;i<(n/2);i++){
        
        for(int j=0;j<n;j++)
        {
            int t=arr[i][j];
            arr[i][j]=arr[n-i-1][n-j-1];
            arr[n-i-1][n-j-1]=t;
        } 
        
    }
    
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
  
  
  
  
  
    
return 0;
}
