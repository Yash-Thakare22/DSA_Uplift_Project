/*
Question 2
Given a 2D array arr[][] of size M x N integers where M is the number of rows and N is the number of columns. The task is to reverse every row of the given 2D array.
Example:
 Input: arr[][] ={ {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }
Output:
3 2 1
6 5 4
9 8 7
*/

#include <iostream>
using namespace std;
void swap(int *p,int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}
int main() {
    int M,N;
    cout << "Enter the Number of Rows of the 2D Array : ";
    cin >> M;
    cout<<"\nEnter the Number of Columns of the 2D Array : ";
    cin >> N;
    int array[M][N];
    cout<<"\nEnter the Elements of the 2D Array : " << endl;
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cin >> array[i][j];
        }
    }
    for(int i = 0; i < M; i++) {
        int start = 0;
        int end = N-1;
        for(int j = 0; j < N/2; j++) {
            swap(&array[i][start],&array[i][end]);
            start++;
            end--;
        }
    }
    cout << "\n2D Array After Reversing Every Row is : " << endl;
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
