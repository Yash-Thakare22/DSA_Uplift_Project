// Question 4: Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.

// Input:
// N = 5
// S = "edsab"
// Output:
// abdes
import java.util.*;

public class Q4LexicographicalSort {
    public static void lexicographicalOrder(char arr[]) {
        int n = arr.length;

        char ans[] = new char[n];

        int count[] = new int[256];

        for (int i = 0; i < 256; i++) {// all values take 0
            count[i] = 0;
        }

        for (int i = 0; i < n; ++i) {
            ++count[arr[i]];
        }

        for (int i = 1; i <= 255; ++i) {
            count[i] += count[i - 1];
        }

        for (int i = 0; i < n; ++i) {
            ans[count[arr[i]] - 1] = arr[i];
            --count[arr[i]];
        }

        for (int i = 0; i < n; ++i) {
            arr[i] = ans[i];
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String");
        String s1 = sc.nextLine();
        char[] arr = s1.toCharArray();
        lexicographicalOrder(arr);
        System.out.println("rearranged String is :");
        System.out.println(arr);
        sc.close();

    }

}
