// Question 5

// Given two strings, write program to check whether two given strings are anagram of each other or not
// An anagram of a string is another string that contains the same characters, only the order of characters can be different

// I/P:
// str1="triangle" , str2="integral"
// O/P:
// Yes. Two strings are anagram of each other
import java.util.*;
public class Q5Anagram {
    public static boolean checkAnagram(String s1,String s2) {
        char[] cs1 = s1.toCharArray();
        char[] cs2 = s2.toCharArray();    
        int l1 = s1.length();
        int l2 = s2.length();
        if(l1!=l2){
            return false;
        }   
        Arrays.sort(cs1);
        Arrays.sort(cs2);
        for (int i = 0; i < l1; i++){
            if(cs1[i] != cs2[i]){
                return false;
            }
        } 
        return true;  
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String 1");
        String s1 = sc.nextLine();
        System.out.println("Enter String 2");
        String s2 = sc.nextLine();
        
        if(checkAnagram(s1,s2)){
            System.out.println("Yes. Two strings are anagram of each other");
        }
        else{
            System.out.println("No. Two strings are not an anagram of each other");
        }

    }
}
