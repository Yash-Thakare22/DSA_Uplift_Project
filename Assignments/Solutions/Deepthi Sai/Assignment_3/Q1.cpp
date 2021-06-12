#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n][n];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
          cin>>arr[i][j]; 
       }
   }
   for(int i=0;i<n;i++)
   {
          cout<<arr[i][i]<<" "; 
 }
 cout<<endl;
 for(int i=0,j=n-1;i<n,j>=0;i++,j--)
 {
     cout<<arr[i][j]<<" ";
 }
 cout<<endl;
   
   
    
    
return 0;
}
