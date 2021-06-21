#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    scanf("%s",s);
    int len=strlen(s),l=0;
    char s1[26];
    for(int i=0;i<len;i++)
    {
        int count=0;
        for(int j=0;j<l;j++)
        {
            if(s1[j]==s[i])
                count=1;
        }
        if(count==0)
        {
            l++;
            s1[l-1]=s[i];
        }
    }
        printf("%s",s1);
}
