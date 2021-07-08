#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter String :";
    getline(cin, str);
    int length = str.length();
    sort(str.begin(), str.end());
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[i + 1])
            cout << str[i];
    }

    return 0;
}
