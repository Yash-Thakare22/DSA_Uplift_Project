// Question 3

// Given two strings, removes the characters from the first string which are present in the second string

// I/P:
// str1="leetcode" , str2="let"
// O/P:
// cod
import java.util.*;

public class Q3RemoveString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String 1");
        String s1 = sc.nextLine();
        System.out.println("Enter String 2");
        String s2 = sc.nextLine();
        char[] cs1 = s1.toCharArray();
        char[] cs2 = s2.toCharArray();

        for (int i = 0; i < cs1.length; i++) {
            for (int j = 0; j < cs2.length; j++) {
                if (cs1[i] == cs2[j]) {
                    cs1[i] = '\0'; // Replace the common char with space
                }
            }
        }
        System.out.println("New string is :");
        for (int i = 0; i < cs1.length; i++) {
            if(cs1[i] == '\0'){
                continue;
            }
            else{
                System.out.print(cs1[i]);
            }
            
        }
        System.out.println("");
        sc.close();
    }
}
