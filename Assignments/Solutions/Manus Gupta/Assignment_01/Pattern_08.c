#include<conio.h>
#include <stdio.h>
int main()
{int x=1;
   for (int i = 5; i >= 1; i--)
   {
       if (i==4)continue;
   
        for (int k = 1; k < x; k++)
      {
          printf(" ");
      }
      for (int j = 1; j <=i; j++)
      {
          printf(" * ");
      }
     
      x=x+2;
      printf("\n");
   }
   return 0;
}
