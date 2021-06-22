#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int m=0,n=0,i=0;
    while(m<row && n<col)
    {

        for(i=m;i<col;i++)
          printf("%d ",arr[m][i]);
        m++;

        for(i=m;i<row;i++)
          printf("%d ",arr[i][col-1]);
        col--;

        for(i=col-1;i>=n;i--)
            printf("%d ",arr[row-1][i]);
        row--;

        for(i=row-1;i>=m;i--)
            printf("%d ",arr[i][n]);
        n++;


    }
    return 0;
}
