// Question 5

// Given an array arr[] of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest

// I/P:
// 5 10 40 4 6 5 10

// O/P:
// 5 (5 is the first element that repeats)

import java.util.*;

public class Q5FirstRepeatingElement {
    public static int repeatedElement(int arr[],int n) {
        int index = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j] == arr[i]){
                    index = j;
                    return j;
                }
            }
            if(index == 1){
                break;
            }
        }
        return -1;
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
        int ans = repeatedElement(arr,n);
        System.out.println("Repeated element is");
        System.out.println(arr[ans]+" At index "+ ans);


    }

}
