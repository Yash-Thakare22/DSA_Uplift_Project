#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    scanf("%s",s);
    char r[100];
    scanf("%s",r);
    int len1=strlen(s),len2=strlen(r),count=0;
    if(len1==len2)
    {
        for(int i=0;i<len1;i++)
        {
            for(int j=0;j<len2;j++)
            {
                if(r[j]==s[i])
                count++;
            }
        }
        if(count==len1)
            printf("Yes. Two strings are anagram of each other.");
        else
            printf("No. Two strings are not anagram of each other.");
    }
    else
        printf("No. Two strings are not anagram of each other");
}
