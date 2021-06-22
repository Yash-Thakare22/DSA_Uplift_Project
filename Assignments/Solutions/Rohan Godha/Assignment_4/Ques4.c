#include<stdio.h>
void main()
{
    char s[100];
    scanf("%[^\n]%*c",s);
    int len=strlen(s),last=len-1,start=0,k=0;
    char r[len];
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]==' ')
        {
            start=i+1;
            for(int j=start;j<=last;j++)
            {
                r[k]=s[j];
                k++;
            }
            r[k]=' ';
            k++;
            last=i-1;
        }
    }
    for(int i=0;i<=last;i++,k++)
        r[k]=s[i];
    printf("%s",r);

}
