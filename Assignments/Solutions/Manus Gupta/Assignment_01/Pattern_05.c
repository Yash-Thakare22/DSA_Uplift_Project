#include <stdio.h>
#include<conio.h>
void main()
{
int a=5;
for (int i = 1; i <= 4; i++)
{
    for (int j = 1; j <=i; j++)
    {
        if (j==4)
        continue;
        printf("%d ",j);
    }
    for (int k = 1; k <=a; k++)
    {
        printf("  ");
    }
    for (int m = i; m >=1; m--)
    {
        printf("%d ",m);
    }
    
    a=a-2;
    printf("\n");
}
}
