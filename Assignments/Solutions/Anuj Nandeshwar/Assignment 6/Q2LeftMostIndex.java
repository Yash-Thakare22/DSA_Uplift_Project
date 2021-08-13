// Question 2: Given a sorted array of positive integers (elements may be repeated) and a number x. The task is to find the leftmost index of x in the given array.
// Example 1:
// Input:
// N = 10
// arr[] = {1,1,2,2,3,4,5,5,6,7}
// x = 1
// Output: 0

import java.util.Scanner;
public class Q2LeftMostIndex {
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
