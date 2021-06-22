// Question 3

// Given an array, cyclically rotate the array clockwise by one

// I/P:
// 1 2 3 4 5

// O/P:
// 5 1 2 3 4


import java.util.*;

public class Q3RotateArray {
    public static void rotateByOne(int arr[],int n) {
        int j = arr.length - 1;
        int i = 0;
        while(i != j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;

        }
            
            
    }


    public static void printArray(int[] arr,int n){
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Array length");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        printArray(arr,n);
       
        System.out.println();
        rotateByOne(arr,n);
        System.out.println("Rotated array is");
        printArray(arr,n);
        System.out.println();


    }

}