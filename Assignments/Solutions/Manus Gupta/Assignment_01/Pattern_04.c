#include <stdio.h>
int main()
{
    int x=3,c=1;
   for (int i = 1; i <= 3; i++)
   {
      for (int j = 1; j <=x; j++,x--)
      {
          printf("  ");
      }
      for (int k = 1; k <= i; k++)
      { 
          printf(" * ");
      }
      printf("\n");
   }
   for (int o = 1; o <=2; o++)
   {
       for (int p = 1; p <= o ; p++)
       {
           printf(" ");
       }
       for (int q = 2; q >=o; q--)
       {
           printf(" * ");
       }
       printf("\n");
   }
return 0;
}
