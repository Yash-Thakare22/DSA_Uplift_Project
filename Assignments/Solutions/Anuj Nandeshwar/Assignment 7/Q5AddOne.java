// Question 5
// Write a program to add one to a given number. You are allowed to use only bitwise operator

// I/P:
// 30

// O/P:
// 31
import java.util.Scanner;
public class Q5AddOne {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter element");
        int n = sc.nextInt();
        System.out.println("After +1 ans is "+ -(~n));//~n = -(n+1) 
        sc.close();
    }

}
