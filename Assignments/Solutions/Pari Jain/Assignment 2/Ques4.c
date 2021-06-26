#include<stdio.h>

int main()
{
    int n,m=0,l=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    int largest=a[0];
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+a[j];
            if(sum>largest)
            {
                m=i;l=j;
                largest=sum;
            }
        }
    }
    printf("%d",largest);
    return 0;
}
