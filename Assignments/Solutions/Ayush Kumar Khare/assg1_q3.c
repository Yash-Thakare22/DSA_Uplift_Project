#include<stdio.h>
int main()
{
    int n=10,i,j=1;
    scanf("%d",&n);
    for(i=1;j<=n;i++)
    {
        int itr=0;
        while(itr<i && j<=n)
        {
            printf("%d ",j);
            j++;
            itr++;
        }
        printf("\n");
    }
    return 0;
}
