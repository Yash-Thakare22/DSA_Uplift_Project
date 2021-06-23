#include<stdio.h>
void main()
{
    int num;
    scanf("%d",&num);
    int a[num];
    for(int i=0;i<num;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<num;i++)
    {
        int count=0;
        for(int j=0;j<num;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        if(count<3)
          printf("%d\n",a[i]);
    }
}
