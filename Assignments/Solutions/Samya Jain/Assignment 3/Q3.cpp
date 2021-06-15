/* Question3:
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

#include <iostream>

using namespace std;

int main() {

    int m, n;
    cout << "Enter the size of the matrix(rows*column) :";
    cin >> m >> n;

    cout << "\nEnter array element : ";
    int arr[m][n];
    for (int i = 0; i < m; i++)
        for (int j =0; j < n; j++)
            cin >> arr[i][j];

    cout << "\nThe array you entered is : " << endl;
    for (int i = 0; i < m; i++) {
        for (int j =0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "\nSpiral Order : ";

    int top = 0, down = n-1, left = 0, right = m-1;
    int dir = 0;

    while (top <= down && left <= right) {
        if (dir == 0) {
            for (int i = left; i <= right; i++)
                cout << arr[top][i] << " ";
            top++;
        }

        else if (dir == 1) {
            for (int i = top; i <= down; i++)
                cout << arr[i][right] << " ";
            right--;
        }
        else if (dir == 2) {
            for (int i =right; i >= left; i--)
                cout << arr[down][i] << " ";
            down--;
        }
        else if (dir == 3) {
            for (int i =down; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }

    dir = (dir + 1) % 4;
    }
    return 0;
}
