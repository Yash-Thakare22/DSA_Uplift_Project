// Question3: 
// Given a M*N matrix, print the matrix in spiral order
// Input:

// [  1   2   3   4  5 ]
// [ 16  17  18  19  6 ]
// [ 15  24  25  20  7 ]
// [ 14  23  22  21  8 ]
// [ 13  12  11  10  9 ]

// Output:

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
import java.util.Scanner;

public class Q3SpiralPrint {

    public static void rotateBy180Degree(int[][] arr, int rows, int columns) {
        int top = 0, down = rows - 1, left = 0, right = columns - 1;
        int dir = 0;// 0 means L->R, 1 means T->D, 2 means R->L, 3 means D->T
        int i;
        while (top <= down && left <= right) {
            if (dir == 0) {
                for (i = left; i <= right; i++) {
                    System.out.print(arr[top][i] + " ");
                }
                top++;
                System.out.print("");
            } else if (dir == 1) {
                for (i = top; i <= down; i++) {
                    System.out.print(arr[i][right] + " ");

                }
                right--;
                System.out.print("");
            } else if (dir == 2) {
                for (i = right; i >= left; i--) {
                    System.out.print(arr[down][i] + " ");

                }
                down--;
                System.out.print("");
            } else if (dir == 3) {
                for (i = down; i >= top; i--) {
                    System.out.print(arr[i][left] + " ");

                }
                left++;

            }
            dir = (dir + 1) % 4;

        }

    }

    public static void printArray(int[][] arr, int rows, int columns) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(arr[i][j] + " ");

            }
            System.out.println();
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter rows for matrix");
        int rows = sc.nextInt();
        System.out.println("Enter columns for matrix");
        int columns = sc.nextInt();
        System.out.println("Enter Matrix Elements");

        int[][] arr = new int[rows][columns];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                arr[i][j] = sc.nextInt();

            }

        }
        sc.close();
        System.out.println("Matrix is");
        printArray(arr, rows, columns);

        System.out.println("Printing in spiral form: ");
        rotateBy180Degree(arr, rows, columns);

    }
}
