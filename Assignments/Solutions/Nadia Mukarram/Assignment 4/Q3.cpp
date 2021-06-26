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
    cout << "\nString 2:";
    cin >> s2;
    int count[256] = {0};

    for (int i = 0; i < s2.size(); i++)
    {
        count[s2[i]]++;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if (count[s1[i]] <= 0)
        {
            cout << s1[i];
        }
    }

    return 0;
}
