// Question 1.
//              *  *  *  *  *
//           *  *  *  *  *
//        *  *  *  *  *
//     *  *  *  *  *
//  *  *  *  *  *

import java.util.Scanner;

public class Pattern1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        sc.close();
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=(3*(rows-i));j++){
                System.out.print(" ");
            }
            for(int k=1;k<=rows;k++){
                System.out.print(" * ");
            }
            System.out.println();
        }
        
        

    }
}
