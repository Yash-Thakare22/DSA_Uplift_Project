#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==1 && a[j]==0)
            {
                a[j]=1;
                a[i]=0;
            }

        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
