// Question 8:Downward start pyramid pattern
//  * * * * *
//    * * *
//     * *
//      *

import java.util.Scanner;

public class Pattern8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        sc.close();
        for(int i=1;i<=rows;i++){
            // first print space
            for(int space=1;space<i;space++) {
                System.out.print(" ");
            }
            // Now print stars
            for(int j=i;j<=rows;j++){
            //for(int j=0;j<=rows-i;j++){
        
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}