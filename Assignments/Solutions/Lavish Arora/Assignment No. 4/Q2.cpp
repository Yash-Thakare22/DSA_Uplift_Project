#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter String :";
    getline(cin, s);
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1])
            cout << s[i];
    }
    return 0;
}
