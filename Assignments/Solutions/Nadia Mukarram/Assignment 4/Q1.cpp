#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[100];
    cout << "String 1 :" cin >> s1;
    char s2[100];
    cout << "String 2 :" cin >> s2;
    char t[100];
    int i = 0;
    while (s1[i] != '\0')
    {
        t[i] = s1[i];
        i++;
    }
    t[i] = '\0';
    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    i = 0;
    while (t[i] != '\0')
    {
        s2[i] = t[i];
        i++;
    }
    s2[i] = '\0';
    cout << "String 1 after swapping  " << s1 << endl;
    cout << "String 2 after swapping " << s2;

    return 0;
}
