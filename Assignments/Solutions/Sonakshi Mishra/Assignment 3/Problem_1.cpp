#include<iostream>
using namespace std;
 
const int MAX = 100;
 
// Function to print the Principal Diagonal
void printPrincipalDiagonal(int mat[][MAX],int n)
{
    cout << "Principal Diagonal: ";
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                cout << mat[i][j] << ", ";
        }
    }
    cout << endl;
}
 
// Function to print the Secondary Diagonal
void printSecondaryDiagonal(int mat[][MAX], int n)
{
    cout << "Secondary Diagonal: ";
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
               if ((i + j) == (n - 1))
                cout << mat[i][j] << ", ";
        }
    }
    cout << endl;
}
int main()
{
    int r ;
    cin>>r;
    int Arr[r][MAX];
    for(int i=0;i<r;i++)
      {
          for (int j=0;j<r;j++)
          {
              cin>>Arr[i][j];
          }
      }
    printPrincipalDiagonal(Arr, r);
    printSecondaryDiagonal(Arr, r);
    return 0;
}
