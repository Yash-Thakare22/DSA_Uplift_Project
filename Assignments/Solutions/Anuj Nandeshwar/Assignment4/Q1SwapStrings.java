import java.util.Scanner;

// Question 1

// Given two strings str1 and str2, write program to swap two strings

// I/P:
// str1="C++" , str2="Java"
// O/P:
// str1="Java" , str2="C++"
import java.util.Scanner;
public class Q1SwapStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String 1");
        String str1 = sc.nextLine();
        System.out.println("Enter String 2");
        String str2 = sc.nextLine();
        String temp = str1;
        str1 = str2;
        str2 = temp;
        System.out.println("str1 is :"+str1);
        System.out.println("str2 is :"+str2);
        sc.close();
    }
}
