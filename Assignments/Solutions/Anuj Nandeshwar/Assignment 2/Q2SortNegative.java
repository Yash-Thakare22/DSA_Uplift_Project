// Question 2

// An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers
// Note: Order of elements is not important here


// I/P:
// -2  -3 7 9 -4 2 5 

// O/P:
// -2 -3 –4 7 9 2 5

import java.util.*;

public class Q2SortNegative {
    public static void sort(int arr[],int n) {
        int j=0;
        for(int i=0;i<n;i++){
                if(arr[i]<0){
                  if( i != j ){
                      int temp = arr[i];
                      arr[i] = arr[j];
                      arr[j] = temp;
                    }
                    j++;
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
        System.out.println("Rearranged array is");
        
        printArray(arr,n);
        System.out.println();


    }

}