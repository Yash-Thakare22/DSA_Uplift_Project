#include<stdio.h>
void main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nOutput :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
