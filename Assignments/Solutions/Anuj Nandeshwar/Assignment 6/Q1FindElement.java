// Question 1: Given an integer array and another integer element. The task is to find if the given element is present in array or not.
// Example 1:
// Input:
// n = 4
// arr[] = {1,2,3,4}
// x = 3
// Output: 2

import java.util.Scanner;
public class Q1FindElement {
    public static int findElement(int[] arr, int element) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == element) {
                System.out.println("Element Found at index ");
                System.out.println(i);
                return 0;
            }
        }
        System.out.println("Not found");
        return 0;
        

    }

    public static void printArray(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Array length");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter Element");
        int element = sc.nextInt();
        printArray(arr, n);

        System.out.println();
        findElement(arr, element);
        sc.close();

    }
}
