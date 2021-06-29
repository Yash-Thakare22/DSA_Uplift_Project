#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s1;
    cout << "String 1:";
    cin >> s1;
    string s2;
    cout << "\n String 2:";
    cin >> s2;
    int count_s1[256] = {0};
    int count_s2[256] = {0};
    for (int i = 0; i < s1.size(); i++)
    {
        count_s1[s1[i]]++;
    }
    for (int j = 0; j < s2.size(); j++)
    {
        count_s2[s2[j]]++;
    }
    if (s1.size() != s2.size())
    {
        cout << "No.The given strings are not anagrams";
        return -1;
    }
    int flag = 0;
    for (int i = 0; i < 256; i++)
    {

        if (count_s1[i] != count_s2[i])
        {
            cout << "No, They are not anagrams";
            flag = 1;
            break;
        }
    }
    if (flag != 1)
    {
        cout << "Yes they are anagrams of each other";
    }

    return 0;
}
