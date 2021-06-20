#include<iostream>
#include<string.h>

using namespace std;


int main()
{
    string str, str1;
    int i, c = 0;
    cout<<"Enter String :";
    getline(cin, str);
    int n = str.length();

    string str2[n];
    for (i = 0; i <= n; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            str1 += str[i];
        }
        else
        {
            str2[c] = str1;
            str1 = ' ';
            c++;
        }
    }
    for (i = c - 1; i >= 0; i--)
        cout << str2[i] << " ";
    return 0;
}