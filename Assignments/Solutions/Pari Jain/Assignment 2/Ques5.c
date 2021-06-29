#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],key;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                key=a[i];
                goto Label;
            }
        }
    }
    Label:
    printf("%d",key);
}
