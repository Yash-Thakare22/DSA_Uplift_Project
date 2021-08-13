/*   
Given a 2D array arr[][] of size M x N integers where M is the number of rows and N is the number of columns. The task is to reverse every row of the given 2D array.
Example: 
 
Input: arr[][] = 
{ {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9} }
  
Output:
3 2 1
6 5 4
9 8 7  
*/

#include <iostream>
using namespace std;

int main(){
    int n=3,m=3;
    int a[n][m] =  { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9} };
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=m/2;j++){
            swap(a[i][j],a[n-i-1][m-j-1]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }


    return 0;
}
