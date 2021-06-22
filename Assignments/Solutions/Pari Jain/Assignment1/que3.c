#include<stdio.h>
int main()
{
    int i,j,num=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%2d ",num);
            num++;
        }
        printf("\n");
    }
}
