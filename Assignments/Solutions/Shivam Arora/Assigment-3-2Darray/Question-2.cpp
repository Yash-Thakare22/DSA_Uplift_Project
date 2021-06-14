/*Question 2:
Given a 2D array arr[][] of size M x N integers where M is the number of rows and N is the number of columns.
The task is to reverse every row of the given 2D array.
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

#include<iostream>
using namespace std;

int main(){
//input:
int m;
cin>>m;
int n;
cin>>n;
int arr[m][n] ={ {1, 2, 3} ,
               {4, 5, 6} ,
               {7, 8, 9} };

//reverse row calculation:
for(int i=0;i<m;i++){
    for(int j=0;j<n/2;j++){
        int tmp=arr[i][j];
        arr[i][j]=arr[i][n-1-j];
        arr[i][n-1-j]=tmp;
    }
}

//output:
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
return 0;
}
