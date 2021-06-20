
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
   
    sort(str.begin(), str.end());

    int len = str.length();

    for (int i = 0; i < len; i++)
        if (str[i + 1] != str[i])
            cout << (str[i]);
            
    return 0;
}
