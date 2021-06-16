// Question 5.
//     1           1
//     1 2       2 1
//     1 2 3   3 2 1
//     1 2 3 4 3 2 1

import java.util.Scanner;

public class Pattern5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        sc.close();
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=rows;j++){
                if(j<=i){ 
                    System.out.print(j+" ");//+" " is for better spacing
                }else{
                    System.out.print("  ");//1 extra space added here for better spacing
                }
            }
            for(int j=rows-1;j>=1;j--){
                if(j<=i){ 
                    System.out.print(j+" ");//+" " is for better spacing
                }else{
                    System.out.print("  ");//1 extra space added here for better spacing
                }
            }
            System.out.println();
        }
    }
}
