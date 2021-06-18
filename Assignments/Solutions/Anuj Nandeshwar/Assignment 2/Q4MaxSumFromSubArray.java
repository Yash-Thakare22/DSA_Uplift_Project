// Question 4

// Given an array arr[] of N integers. Find the contiguous sub-array with maximum sum
// Hint: Kadane’s Algorithm

// I/P:
// 8
// -2 -3 4 -1 -2 1 5 -3

// O/P:
// 7

import java.util.*;

public class Q4MaxSumFromSubArray {
    public static int maxSum(int arr[],int n) {
    //kadane's Algorithm used
    int maxSoFar = arr[0], maxEndingHere = 0; 
    for (int i=0;i<n;i++){
        maxEndingHere = maxEndingHere + arr[i];
        if(maxEndingHere < 0){
            maxEndingHere = 0;
        }
        else if(maxSoFar < maxEndingHere){
            maxSoFar = maxEndingHere;
        }
    }
    return maxSoFar;
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
       
        System.out.println("contiguous sub-array with maximum sum is: ");
        int ans = maxSum(arr,n);
        System.out.println(ans);


    }

}