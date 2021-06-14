#include<time.h>
#include <stdio.h>
int main()
{
   // clock_t t;
   // t = clock();
    int n ;
    scanf("%d",&n);
    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (i <= n)
            {
                if (j <= (n - i + 1) || i <= (j - n))
                    printf("* ");
                else
                    printf("  ");
            }
            else
            {
                if((i-n)>=j || (i+j)>(3*n))//6,10//7,9,10
                    printf("* ");
                else 
                    printf("  ");
            }
        }
        printf("\n");
    }
   // t = clock()-t;
    //double time = ((double)t)/CLOCKS_PER_SEC;
   // printf("%f",time);
    return 0;
}
