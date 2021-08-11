// Question 6
// Write a one line function to return position of first 1 from right to left, in binary representation of an integer

// I/P:
// 18 (010010)

// O/P:
// 2
import java.util.Scanner;

public class Q6FirstOneValue {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter element");
        int n = sc.nextInt();
        System.out.println((int) ((Math.log10(n & (~n + 1))) / Math.log10(2)) + 1);//take 2's complement then bitwise & with itself then log2 then add 1
        sc.close();
    }
}
