#include<iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    cin.get(s, 100);

    int index = 0;
    int i = 0, j = 0;

    while (s[i])
    {
        for (j = 0; j < i; j++)
            if (s[i] == s[j])
                break;

        if (j == i)
            s[index++] = s[i];
        i++;
    }

    s[index] = '\0';

    cout << s;


    return 0;
}
