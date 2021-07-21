/*
    1     1
    12   21
    123 321
    1234321
 */
 class Q5
 {
     public static void main(String args[])
     {
         for ( int i = 1; i <= 4; i++)
         {
             for (int j = 1; j<=i; j++)
             {
                 System.out.print(j);
             }
             for ( int j = 1; j <=  7 - 2*i ; j++)
             {
                 System.out.print(" ");
             }
             for ( int j = i==4?3:i; j >=1; j--)
             {
                 System.out.print(j);
             }
             System.out.println();
         }
     }
 }
