// Question3.
// 1
// 2 3
// 4 5 6
// 7 8 9 10
import java.util.Scanner;
public class Pattern3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
         System.out.println("Enter No of rows to print");
        int n = sc.nextInt();
        sc.close();
        int startvalue = 1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(startvalue+" ");
                startvalue++;
            }
            System.out.println();
        }
    }
}    