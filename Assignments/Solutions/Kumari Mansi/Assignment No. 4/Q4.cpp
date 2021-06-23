/* Question 4
Given a string str, write program reverse words in a given string
I/P :
Do problem solving 
O/P:
solving problem Do  */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, str;
    int i, c = 0;
    getline(cin, s);
    int n = s.length();
    string s1[n];
    for (i = 0; i <= n; i++)
    {
        if (s[i] != ' ' && s[i] != '\0')
        {
            str += s[i];
        }
        else
        {
            s1[c] = str;
            str = ' ';
            c++;
        }
    }
    for (i = c - 1; i >= 0; i--)
        cout << s1[i] << " ";
    return 0;
}