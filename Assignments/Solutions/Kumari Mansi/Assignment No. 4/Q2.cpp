/* Question 2
Given a string str, the task is to remove all the duplicates in the given string
I/P :
aababcdd
O/P :
abcd  */

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int i;
    sort(str.begin(), str.end());
    int len = str.length();
    for (i = 0; i < len; i++)
        if (str[i + 1] != str[i])
            cout << (str[i]);
    return 0;
}