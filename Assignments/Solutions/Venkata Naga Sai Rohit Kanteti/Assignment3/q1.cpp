/*

Given a 2D square matrix, print the Principal and Secondary diagonals. 

Examples : 

Input: 
4
1 2 3 4
4 3 2 1
7 8 9 6 
6 5 4 3
Output:
Principal Diagonal: 1, 3, 9, 3
Secondary Diagonal: 4, 2, 8, 6

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    int arr[100][100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"primary diagonals are "<<" ";
    for(i=0;i<n;i++)
    {

      cout<<arr[i][i]<<" ";
            
    }
    cout<<"secondary diagonals are ";
    for(i=0;i<n;i++)
    {

      cout<<arr[i][n-i-1]<<" ";
            
    }
    
    
    return 0;
}
