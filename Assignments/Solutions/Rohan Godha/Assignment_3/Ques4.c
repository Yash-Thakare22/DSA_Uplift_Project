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
    int b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=n-1,k=0;j>=0,k<n;k++,j--)
        {
                b[i][k]=a[i][j];
        }
    }
    printf("\n");
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
