// Question 1

// Given an array arr[] of size N, the task is to sort the array in ascending order

// I/P: 
// 6
// 0 9 4 10 7 8
// O/P:
// 0 4 7 8 9 10

import java.util.*;

public class Q1SortArray {
    public static void sort(int arr[],int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }

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
        sort(arr,n);
        System.out.println("Sorted array is");
        printArray(arr,n);
        System.out.println();


    }

}