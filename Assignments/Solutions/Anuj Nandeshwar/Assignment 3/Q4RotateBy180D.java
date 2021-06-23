// Question 4:Given a square matrix, rotate the matrix by 180 degree.
// Input:
 
// 1   2   3   4
// 5   6   7   8
// 9   10  11  12
// 13  14  15  16
 
// Output:
 
// 16  15  14  13
// 12  11  10  9
// 8   7   6   5
// 4   3   2   1
import java.util.Scanner;
public class Q4RotateBy180D {
    public static void rotateBy180Degree(int[][] arr,int rows,int columns) {
        for (int i = rows-1; i >=0; i--) {
            for (int j = columns-1; j >= 0; j--) {
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
    public static void printArray(int[][] arr,int rows,int columns) {
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                System.out.print(arr[i][j]+" ");
            
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
        

        int[][] arr = new int[rows][columns];
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                 arr[i][j] = sc.nextInt();
                                 
            }
            
        }
        sc.close();
        System.out.println("Matrix is");
        printArray(arr, rows, columns);

        System.out.println("180 degree Roated Matrix is");
        rotateBy180Degree(arr, rows, columns);

    }
}
