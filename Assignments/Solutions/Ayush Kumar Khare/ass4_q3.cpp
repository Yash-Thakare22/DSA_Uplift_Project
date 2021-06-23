#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[256] = {0};
    string str, remove, result = "";
    cin >> str;
    cin >> remove;
    for (int i = 0; i < str.size(); i++)
    {
        arr[remove[i]] = 1;
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (arr[str[i]] == 0)
            result = result + str[i];
    }
    cout << result;
    return 0;
}
