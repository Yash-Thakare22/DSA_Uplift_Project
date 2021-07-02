// Question 3: The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
// Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection

// Input: 
// N = 4, arr1[] = {1, 2, 3, 4}  
// M = 5, arr2 [] = {2, 4, 6, 7, 8}
// Output: 2 4
import java.util.Scanner;

public class Q3CommonIntersection {

    public static void commonIntersection(int[] arr1, int[] arr2, int m, int n) {
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (arr1[i] < arr2[j]) {
                i++;
            }
            if (arr2[j] < arr1[i]) {
                j++;
            } else if (arr1[i] == arr2[j]) {
                System.out.print(arr1[i++] + " ");
                j++;
            }
        }
    }

    // public static void printArray(int[] arr, int n) {
    // for (int i = 0; i < n; i++) {
    // System.out.print(arr[i] + " ");
    // }
    // }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Array 1 length");
        int m = sc.nextInt();

        int[] arr1 = new int[m];
        System.out.println("Enter first sorted array arr1");
        for (int i = 0; i < m; i++) {
            arr1[i] = sc.nextInt();
        }

        System.out.println("Enter Array 2 length");
        int n = sc.nextInt();
        int[] arr2 = new int[n];
        System.out.println("Enter second sorted array arr2");
        for (int j = 0; j < n; j++) {
            arr2[j] = sc.nextInt();
        }
        System.out.println("Intersection is :");
        commonIntersection(arr1, arr2, m, n);

    }

}
