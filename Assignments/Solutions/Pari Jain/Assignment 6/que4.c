#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],count=0;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            count++;
    }
    printf("%d",count);
}
