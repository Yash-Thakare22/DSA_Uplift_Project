/*
     *
    * *
   * * *
    * *
     *
 */
 class Q4
 {
     public static void main(String args[])
     {
         for ( int i = 1; i<=5; i++)
         {
             for ( int j = 2; j >= i ; j--)
             {
                 System.out.print(" ");
             }
             for ( int j = 1; j<=i && i <= 3; j++)
             {
                 System.out.print("* ");
             }
             for ( int j = 4; j <= i ; j++)
             {
                 System.out.print(" ");
             }
             for ( int j = 5; j >= i && i >= 4; j--)
             {
                 System.out.print("* ");
             }
             System.out.println();
         }
     }
 }
