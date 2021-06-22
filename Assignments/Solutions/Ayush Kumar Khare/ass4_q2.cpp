#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[256] = {0};
    string str, result = "";
    cin >> str;
    int k = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (arr[str[i]] == 0)
        {
            arr[str[i]] = str[i];
            result = result + str[i];
        }
    }
    cout << result;
    return 0;
}
