
// Question 2: Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.
// Input: 
// N = 5, K = 3
// arr[] = {3,5,4,2,9}
// Output: 
// 4
import java.util.Scanner;

public class Q2KthSmallestElement {
    
    public static void smallestElement(int[] arr,int n){
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }    
       

    // print array
    public static void printArray(int[] arr,int n){
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array length");
        int n = sc.nextInt();
        System.out.println("Enter kth element");// kth smallest element to find out?
        int k = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter array elements");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        sc.close();
        smallestElement(arr, n);
        printArray(arr, n);
        System.err.println(k + " smallest element is");
        System.err.println(arr[k-1]);
       
    }

}
  

    


