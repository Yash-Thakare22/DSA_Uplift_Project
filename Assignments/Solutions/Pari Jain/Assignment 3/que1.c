#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Principal Diagonal: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
    printf("\nSecondary Diagonal: ");
    for(int i=0,j=n-1;j>=0,i<n;i++,j--)
    {
       printf("%d ",a[i][j]);
    }
}
