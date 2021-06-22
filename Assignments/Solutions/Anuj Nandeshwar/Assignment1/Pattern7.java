// Question 7.
// 1  
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1

import java.util.Scanner;

public class Pattern7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no. of rows to print");
        int rows = sc.nextInt();
        sc.close();
        
        for(int i=0;i<rows;i++){
            int num = 1;// just initializing num
            for(int j=0;j<=i;j++){
                if( i==0 || j==0){
                    num = 1;
                }else{
                    num = num*(i-j+1)/j; 
                /*remember num = 1 value at line 19 is different than this for loop
                ex for i=2--> num =1 then =2 then again =1 prints 1 2 1
                for j=0 num = 1 if loop
                & for j=1 num = 1*(2-1+1)/1 gives num=2 (takes previous num=1)
                now for j=2 num = 2*(2-2+1)/2 gives num =1 (takes previous num=2)
                */
                }
                System.out.print(num+" ");
               
            }
            System.out.println();
        }
    }
}
