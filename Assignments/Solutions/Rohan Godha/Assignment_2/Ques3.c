#include<stdio.h>
void main()
{
    int a[5];
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    int temp=a[4];
    for(int i=0;i<5;i++)
    {
        int b=a[i];
        a[i]=temp;
        temp=b;
    }
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);
}
