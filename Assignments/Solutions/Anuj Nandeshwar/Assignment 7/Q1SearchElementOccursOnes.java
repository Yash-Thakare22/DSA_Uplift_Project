// Question 1
// Given an i/p array where every element occurs three times, except one element which occurs only once . Find that element

// I/P:
// 4 3 5 5 4 4 5

// O/P:
// 3

import java.util.*;

public class Q1SearchElementOccursOnes {
    public static void searchOElement(int arr[]) {
        int tn = Integer.MAX_VALUE, tnp1 = 0, tnp2 = 0;// like tn=3n tnp1=3n+1 tnp2=3n+2
        for (int i = 0; i < arr.length; i++) {
            int cwtn = arr[i] & tn;// CommnnWith3n
            int cwtnp1 = arr[i] & tnp1;// CommnnWith3n+1
            int cwtnp2 = arr[i] & tnp2;// CommnnWith3n+1

            tn = tn & (~cwtn);// do off in 3n
            tnp1 = tnp1 | cwtn;// on 3n+1

            tnp1 = tnp1 & (~cwtnp1);// off 3n+1
            tnp2 = tnp2 | cwtnp1;// on 3n+2

            tnp2 = tnp2 & (~cwtnp2);// on 3n+2
            tn = tn | cwtnp2;// off 3n

        }
        System.out.println(tnp1);// 3n+1 nature bit on answer

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
        printArray(arr, n);

        System.out.println();

        System.out.println("Element Occurs ones is");
        searchOElement(arr);
        // System.out.println();
        sc.close();

    }

}