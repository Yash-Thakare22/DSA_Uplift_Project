#include <stdio.h>
int main()
{
    int n , i, j;
    scanf("%d",&n);
    int array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            array[i][j]=0;
    }

    array[0][0] = 1;
    for (i = 1; i <= n; i++)
    {
        array[i-1][0]=1;
        for (j = 1; j <= i; j++)
        {
            if (j>1)
                array[i - 1][j - 1] = array[i - 2][j-2] + array[i - 2][j - 1];
            printf("%d ", array[i - 1][j - 1]);
        }
        printf("\n");
    }
    return 0;
}
