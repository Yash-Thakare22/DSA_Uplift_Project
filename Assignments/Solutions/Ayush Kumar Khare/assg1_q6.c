#include<stdio.h>
int main()
{
    int n,i,j=1;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        j=0;
       while(j<i)
       {
           printf("%d ",n-j);
           j++;
       }        
        printf("\n");
    }
    return 0;
}
