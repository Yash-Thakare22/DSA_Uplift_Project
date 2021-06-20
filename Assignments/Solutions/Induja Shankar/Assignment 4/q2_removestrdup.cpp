#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    char str1[100];
    cin.get(str1, 100);
    
    int index = 0;
    int i = 0, j = 0;
    
    while(str1[i])
    {
        for(j = 0; j < i; j++)
            if(str1[i] == str1[j])
            break;
            
        if(j == i)
            str1[index++] = str1[i];
        i++;
    }
    
    str1[index]='\0';
    
    cout << str1;
    
    return 0;
}
