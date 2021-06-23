#include<stdio.h>
#include<math.h>
void main()
{
    int num,count=0;
    scanf("%d",&num);
    for(int i=1;i<100;i++)
    {
        if(pow(4,i)==num)
        {
            printf("Yes");
            count=1;
            break;
        }
    }
    if(count==0)
        printf("No");
}
