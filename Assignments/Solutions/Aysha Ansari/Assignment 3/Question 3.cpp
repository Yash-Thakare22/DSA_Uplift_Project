#include <iostream>
using namespace std;
 
#define M 5
#define N 5
 
void printSpiralOrder(int mat[M][N])
{
    int top = 0, bottom = M - 1;
    int left = 0, right = N - 1;
 
    while (1)
    {
        if (left > right) {
            break;
        }
        // print top row
        for (int i = left; i <= right; i++) {
            cout << mat[top][i] << " ";
        }
        top++;
 
        if (top > bottom) {
            break;
        }
        // print right column
        for (int i = top; i <= bottom; i++) {
            cout << mat[i][right] << " ";
        }
        right--;
 
        if (left > right) {
            break;
        }
        // print bottom row
        for (int i = right; i >= left; i--) {
            cout << mat[bottom][i] << " ";
        }
        bottom--;
 
        if (top > bottom) {
            break;
        }
        // print left column
        for (int i = bottom; i >= top; i--) {
            cout << mat[i][left] << " ";
        }
        left++;
    }
}
 
int main()
{
    int mat[M][N] =
    {
        { 1, 2, 3, 4, 5},
        {16, 17, 18, 19, 6},
        {15, 24, 25, 20, 7},
        {14, 23, 22, 21, 8},
        {13, 12, 11, 10, 9}
    };
 
    printSpiralOrder(mat);
 
    return 0;
}
