#include<iostream>
using namespace std;
int main()
{
   int m,n;
   cin>>m>>n;
   
   int arr[m][n];
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
        cin>>arr[i][j];  
      }
  }
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
         
        int start=0,end=n-1;
    
    while (start < end)
    {
        int temp ;
        temp=arr[i][start];
        arr[i][start] = arr[i][end];
        arr[i][end] = temp;
        start++;
        end--;
    }

      }
  }
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
        cout<<arr[i][j]<<" "; 
      }
      cout<<endl;
  }
return 0;
}
