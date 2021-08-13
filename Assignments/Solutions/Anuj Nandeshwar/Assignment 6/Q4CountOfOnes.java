// Question 4: Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.
// Example 1:
// Input:
// N = 8
// arr[] = {1,1,1,1,1,0,0,0}
// Output: 5

import java.util.Scanner;

public class Q4CountOfOnes {

    public static void printArray(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Array length");
        int n = sc.nextInt();
        System.out.println("Enter Array of 1 and 0 in non increasing order");
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int sum = 0;
        printArray(arr, n);
        System.out.println();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 1) {
                sum++;
            }
        }

        System.out.println("No. of one's is " + sum);

        sc.close();
    }
}
