// Question 6.
// 54321
// 5432
// 543
// 54
// 5


import java.util.Scanner;

public class Pattern6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no. of rows to print");
        int rows = sc.nextInt();
        sc.close();
        for(int i=1;i<=rows;i++){
            for(int j=rows;j>=i;j--){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}