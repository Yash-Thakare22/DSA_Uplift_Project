#include <iostream>
using namespace std;
int main()
{
    string s;
    int n;
    cout << "Enter the size of string";
    cin >> n;
    cout << "Enter the string";
    cin >> s;
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n-1 ; j++)
        {
            if (s[j] > s[j + 1])
                {
                    int temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
        }
    }
    for (int i = 0; i < n; i++)
        cout << s[i];
    return 0;
}
