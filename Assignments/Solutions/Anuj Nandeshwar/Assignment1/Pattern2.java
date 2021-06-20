// Question 2.

// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *
// *                  *
// * *              * *
// * * *          * * *
// * * * *      * * * *
// * * * * *  * * * * *

import java.util.Scanner;

public class Pattern2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt()/2;
        sc.close();
        for (int i=1;i<=rows;i++){    
            for (int j=i;j<=rows;j++){
                System.out.print("*");
            }
            for (int k=1;k<=i*2-2;k++){
                System.out.print(" ");
            }
            for (int l=i;l<=rows;l++){
                System.out.print("*");
            }
            System.out.println();
        }
        //for half downward pattern
        for (int i=1;i<=rows;i++){
            for (int j=1;j<=i;j++){
                System.out.print("*");
            }
            for (int k=((i*2)-2);k<((rows*2)-2);k++){
                System.out.print(" ");
            }
            for (int l=1;l<=i;l++){
                System.out.print("*");
            }
            System.out.println();
        }
        
        
        
    }
        
        

}
