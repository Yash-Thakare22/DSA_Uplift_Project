/*
Question 3
Given a M*N matrix, print the matrix in spiral order
Input:
[  1   2   3   4  5 ]
[ 16  17  18  19  6 ]
[ 15  24  25  20  7 ]
[ 14  23  22  21  8 ]
[ 13  12  11  10  9 ]
Output:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
*/

#include<iostream>
using namespace std;
int main() {
    int i,j;
    int m,n;
    cout << "Enter the Number of Rows of the 2D Matrix : ";
    cin >> m;
    cout<<"\nEnter the Number of Columns of the 2D Matrix : ";
    cin >> n;
    int a[m][n];
    cout<<"\nEnter the Elements of the 2D Matrix : " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int k = 0, l = 0;
    cout << "\n2D Matrix in Spiral Order : " << endl;
    while(k < m && l < n) {
        for(i = l; i < n; i++)
            cout << a[k][i] << " " ;
        k++;
        for(i = k; i < m; i++)
            cout << a[i][n-1] << " ";
        n--;
        if(k < m) {
            for(i = n-1; i >= 0; --i)
                cout << a[m-1][i] << " ";
            m--;
        }
        if(l < n) {
            for(i = m-1; i >= k; --i)
                cout << a[i][l] << " ";
            l++;
        }
    }
    cout << endl;
    return 0;
}
