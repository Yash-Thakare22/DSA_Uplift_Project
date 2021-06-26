#include <iostream>
using namespace std;
int main()
{
    string s;
    int n;
    cout<<"Enter the size of the string :";
    cin >> n;
    cout<<"Enter the elements of the string :";
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] > s[j + 1])
                swap(s[j], s[j + 1]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << s[i];
    return 0;
}