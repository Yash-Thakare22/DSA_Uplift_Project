/*  Question 3
Given two strings, removes the characters from the first string which are present in the second string
I/P :
str1="leetcode" , str2="let"
O/P :
cod    */

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2, s;
    int i, j, flag;
    getline(cin, s1);
    getline(cin, s2);
    int n = s1.length();
    int m = s2.length();

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (s1[i] == s2[j])
                s1[i] = ' ';
        }
    }

    for (i = 0; i < n; i++)
    {
        if (s1[i] == ' ')
            continue;
        else
            cout << s1[i];
    }

    return 0;
}
