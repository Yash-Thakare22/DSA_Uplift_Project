#include <stdio.h>
int main()
{int j,x=1;
   for (int i = 5; i >= 1; i--)
   {
      for ( j = 1; j <=i; j++)
      {
         printf("*");
      }
      for (int b =1; b < x; b=b+2)
      {
          printf("  ");
      }
      
      for (int a = 1; a <= i ; a++)
      {
          printf("*");
      }
      printf("\n");
      x=x+2;
   }
   x=x-2;
    for (int k = 1; k <= 5; k++)
      {
         /* code */
         for (int c = 1; c <=k; c++)
      {
         printf("*");
      }
      for (int p = x; p > 1; p=p-2)
      {
         /* code */printf("  ");
      }
      for (int q = 1; q <=k; q++)
      {
         /* code */printf("*");
      }
      x=x-2;

      printf("\n");
      }
   return 0;
}   
