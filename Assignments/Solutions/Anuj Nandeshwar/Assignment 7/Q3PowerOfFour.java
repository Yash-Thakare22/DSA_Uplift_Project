// Question 3
// Given an integer n, find whether it is a power of 4 or not

// I/P:
// 16

// O/P:
// Yes
import java.util.Scanner;

public class Q3PowerOfFour {

    static int isPowerOfFour(int n) {// if power of four then only 1 bit ON and right side bits are even ex.
                                     // 10000=16,
        int count = 0;
        int x = n & (n - 1);// check only 1 bit present
        if (n > 0 && x == 0) {
            while (n > 1) {// check bits before On bit
                n >>= 1;
                count += 1;
            }
            return (count % 2 == 0) ? 1 : 0;//if bits even return TRUE else FALSE
        }
        return 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st element");
        int n = sc.nextInt();
        if (isPowerOfFour(n) > 0) {
            System.out.println("YES power of four");

        } else {
            System.out.println("False");

        }
        sc.close();
    }

}
