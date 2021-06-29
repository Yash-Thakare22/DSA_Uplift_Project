// Question 1: 
// Given a 2D square matrix, print the Principal and Secondary diagonals. 

// Examples : 

// Input: 
// 4
// 1 2 3 4
// 4 3 2 1
// 7 8 9 6
// 6 5 4 3
// Output:
// Principal Diagonal: 1, 3, 9, 3
// Secondary Diagonal: 4, 2, 8, 6

import java.util.*;

public class Q1PrincipalAndSecondaryDiagonal {
    public static void principalDiagonal(int[][] arr,int rows,int columns) {
        for(int i=0;i<rows;i++){//remember index less than row
            for(int j=0;j<columns;j++){//remember index less than columns
                if(i==j)
                    System.out.print(arr[i][j]+" ");
            
            }
        }
        System.out.println();
    }  

    public static void secondaryDiagonal(int[][] arr,int rows,int columns,int n) {
        for(int i=0;i<rows;i++){//remember index less than row
            for(int j=0;j<columns;j++){//remember index less than columns
                if(i+j==n-1){
                    System.out.print(arr[i][j]+" ");
                }
            }
        }
        System.out.println();
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
        System.out.println("Enter length for matrix");
        int n = sc.nextInt();
        System.out.println("Enter rows for matrix");
        int rows = sc.nextInt();
        System.out.println("Enter columns for matrix");
        int columns = sc.nextInt();
        // int[] arr = new int[n][n];
        //taking input of 2D square array
        int[][] arr = new int[rows][columns];
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                 arr[i][j] = sc.nextInt();
                                 
            }
            
        }
        System.out.println("Matrix is");
        printArray(arr,rows,columns);
       
        System.out.println();
        
        System.out.println("principal Diagonal is :"); 
        principalDiagonal(arr,rows,columns);
        System.out.println("secondary Diagonal is :");
        secondaryDiagonal(arr,rows,columns,n);


    }

}
