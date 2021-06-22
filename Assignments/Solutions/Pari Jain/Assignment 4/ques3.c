#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    scanf("%s",s);
    char r[100];
    scanf("%s",r);
    int len1=strlen(s),len2=strlen(r),l=0;
    char s1[26];
    for(int i=0;i<len1;i++)
    {
        int count=0;
        for(int j=0;j<len2;j++)
        {
            if(r[j]==s[i])
                count=1;
        }
        if(count==0)
        {
            s1[l]=s[i];
            l++;
        }
    }
        printf("%s",s1);
}
