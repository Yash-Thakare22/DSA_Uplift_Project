// Question2:
// Given a 2D array arr[][] of size M x N integers where M is the number of rows and N is the number of columns. The task is to reverse every row of the given 2D array.
// Example: 
 

// Input: arr[][] = 
// { {1, 2, 3},
//   {4, 5, 6},
//   {7, 8, 9} }
// Output:
// 3 2 1
// 6 5 4
// 9 8 7

import java.util.*;

public class Q2ReverseEveryRow {
    public static void reverseMatrixRow(int[][] arr,int rows,int columns) {
        for (int i = 0; i < rows; i++) {
            int start = 0;
            int end = columns-1;
            while(start<end){ 
                int temp = arr[i][start];
                arr[i][start] = arr[i][end];
                arr[i][end] = temp;
                start++;
                end--;    
            }
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
        printArray(arr,rows,columns);
       
        System.out.println();
        reverseMatrixRow(arr,rows,columns);
        System.out.println("Reverse Matrix is");
        printArray(arr,rows,columns);
        
       
    }
    

}

