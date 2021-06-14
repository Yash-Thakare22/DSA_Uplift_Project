#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    char str1[100], str2[100], str3[100];
    cin >> str2 >> str1;
    
    int i = 0, j = 0, index = 0;
    
    while(str1[i])
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
                continue;
            else
            {
                str3[index] = str2[j];
                index++;
            }
        }
        str3[index] = '\0'; strcpy(str2, str3);
        index = 0; i++;
    }
    
    str3[index]='\0';
    cout << str3;
    
    return 0;
}
