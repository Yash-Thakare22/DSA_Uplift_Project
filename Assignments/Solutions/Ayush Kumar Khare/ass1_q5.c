#include<stdio.h>
int main()
{
    int n=4,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<2*n;j++)
        {
            if(j<=i)
                printf("%d ",j);
            else if( i>=(2*n-j))
                printf("%d ",(2*n-j));
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
