#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    cin >> s;

    int count[26] = {0};

    for (int i = 0; i < n; i++)
    {

        count[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < count[i]; j++)
            cout << (char)('a' + i);
    }

    return 0;
}
