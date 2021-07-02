// Question 4
// Given an integer x, write a function that multiplies x with 3.5 and returns the integer result. You are allowed to use only bitwise operator

// I/P:
// 5 

// O/P:
// 17
import java.util.Scanner;
public class Q4MultiplyByX {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter element");
        int n = sc.nextInt();
        System.out.println(((n << 1) + n + (n >> 1)));//2*n + n + n/2 = n*3.5
        sc.close();
    }

}
