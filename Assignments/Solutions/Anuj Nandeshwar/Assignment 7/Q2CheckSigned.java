// Question 2
// Given two i/p signed integers, write function that returns true if the signs of given integers are different, otherwise false

// I/P:
// -4 +5

// O/P:
// True
import java.util.Scanner;

public class Q2CheckSigned {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st element");
        int a = sc.nextInt();
        System.out.println("Enter 2nd element");
        int b = sc.nextInt();
        if ((a ^ b) < 0) {
            System.out.println("True");
            System.out.println("As Signed integers are different");
        } else {
            System.out.println("False");
            System.out.println("As Signed integers same");
        }
        sc.close();
    }

}
