#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    char s[100];
    strcpy(s,s1);
    strcpy(s1,s2);
    strcpy(s2,s);
    printf("\n%s %s",s1,s2);
}
