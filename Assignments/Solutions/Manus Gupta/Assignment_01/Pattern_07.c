#include <stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    for (int i = 1; i <= 6 ;  i++)
    {int p=1;
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            printf("%d ",p);
            p=p*(i-j)/j;
        }
        printf("\n");   
    }
}
