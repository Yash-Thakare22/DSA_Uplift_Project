// Question 2

// Given a string str, the task is to remove all the duplicates in the given string

// I/P:
// aababcdd
// O/P:
// abcd

import java.util.Scanner;

public class Q2RemoveDuplicates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String");
        String str = sc.nextLine();
        String ans = "";
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (!ans.contains(""+ch)) {
                ans += ch;
            }
        }
        sc.close();
        System.out.println(ans);
    }

}
