
// Question 3:Given a sorted array of size N and an integer K. Check if K is present in the array or not.
// Example 1:
// Input:
// N = 5, K = 6
// arr[] = {1,2,3,4,6}
// Output: 1
import java.util.Scanner;

public class Q3BinarySearch {
    public static int binarySearch(int[] arr, int element, int start, int end) {

        int mid = start + (end - start) / 2;
        while (start <= end) {
            for (int i = 0; i < arr.length; i++) {
                if (element == arr[mid]) {
                    return mid;
                } else if (element > arr[mid]) {
                    return binarySearch(arr, element, mid + 1, end);
                } else if (element < arr[mid]) {
                    return binarySearch(arr, element, start, mid - 1);
                }
            }

        }

        return -1;

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
        int start = 0;
        int end = arr.length - 1;
        System.out.println("Enter Element");
        int element = sc.nextInt();
        printArray(arr, n);

        System.out.println();
        int ans = binarySearch(arr, element, start, end);
        if (ans == -1) {
            System.out.println("Not found");
        } else {
            System.out.println("Found at index " + ans);
        }
        sc.close();

    }
}
