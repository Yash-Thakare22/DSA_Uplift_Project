// Question Link : https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid
#define UNASSIGNED 0

// N is used for the size of Sudoku grid.
// Size will be NxN
#define N 9


// } Driver Code Ends

class Solution {
  public:
    bool isSafe(int grid[N][N],int i,int j,int n) {
        for(int k = 0; k < N; k++) {
            if(grid[i][k] == n || grid[k][j] == n) {
                return false;
            }
        }
        int s = sqrt(N);
        int rs = i - i%s;
        int cs = j - j%s;
        for( int i = 0; i < s; i++) {
            for(int  j = 0; j < s; j++) {
                if(grid[i+rs][j+cs] == n) {
                    return false;
                }
            }
        }
        return true;
    }

    bool SolveSudoku(int grid[N][N]) {
        int i,j;
        for(i=0 ; i<N ; i++) {
            bool flag = false;
            for(j=0; j<N; j++) {
                if(grid[i][j]==0) {
                    flag=true;
                    break;
                }
            }
            if(flag) {
                break;
            }
        }
        if(i==N and j==N)
            return true;
        for(int n=1 ; n<=N; n++) {
            if(isSafe(grid,i,j,n)) {
                grid[i][j]=n;
                if(SolveSudoku(grid))
                    return true;
                grid[i][j]=0;
            }
        }
        return false;
    }

    void printGrid (int grid[N][N]) {
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                cout<<grid[i][j]<<" ";
            }
        }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--) {
        int grid[N][N];

        for(int i=0; i<9; i++)
            for(int j=0; j<9; j++)
                cin>>grid[i][j];

        Solution ob;

        if (ob.SolveSudoku(grid) == true)
            ob.printGrid(grid);
        else
            cout << "No solution exists";

        cout<<endl;
    }

    return 0;
}  // } Driver Code Ends
