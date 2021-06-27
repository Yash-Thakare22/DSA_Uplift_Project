// Question 4

// Given a string str, write program reverse words in a given string

// I/P:
// Do problem solving
// O/P:
// solving problem Do
import java.util.*;
public class Q4ReverseWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String");
        String str = sc.nextLine();
        String[] sub_str=str.split(" ");
        int i;
        System.out.print("New string after reversing words is: ");
        for(i=sub_str.length-1;i>=0;i--){
        System.out.print(sub_str[i]+" ");
        }
        System.out.println("");
       
    }
}


