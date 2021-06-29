/* Question 2:
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

    cout << " The array you entered is : " << endl;
    for (int i = 0; i < m; i++) {
        for (int j =0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }


    for (int i = 0; i < m; i++) {
        int j = 0;
        int k = n - 1;
        while (j < k) {
            swap (arr[i][j], arr[i][k]);
            j++;
            k--;
        }
    }

    cout << " The resultant array is : " << endl;
    for (int i = 0; i < m; i++) {
        for (int j =0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    cout<<endl;
    return 0;
}

