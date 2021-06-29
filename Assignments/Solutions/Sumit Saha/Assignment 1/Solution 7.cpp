/*
Question 7.
1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1

*/

#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {
        if(j==i||j==0)
        arr[i][j]=1;
        else 
        arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    
}

return 0;
}

