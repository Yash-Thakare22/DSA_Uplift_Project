// Question 1:Given a binary array A[] of size N. The task is to arrange the array in increasing order.
// Note: The binary array contains only 0  and 1.
// Input: 
// 5
// 1 0 1 1 0
// Output:
// 0 0 1 1 1
import java.util.Scanner;
public class Q1RearrangeBArrayInIncreasing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array length");
        int n = sc.nextInt();
        System.out.println("Enter array elements");
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        //Method
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
            }
        }
        for (int i = 0; i < n; i++) {
            if(i < count){
                arr[i] = 0;
            }
            else{
                arr[i] = 1;
            }
        }
        //print array
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println(); 
        sc.close();

    }
   
}
