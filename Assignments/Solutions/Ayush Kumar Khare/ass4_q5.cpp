#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[256] = {0};
    string str1, str2;
    cin >> str1 >> str2;
    int i = 0;
    int size2 = str2.size();
    int temp=0;
    while (str1[i])
    {
        int j = 0;
        while (j<size2)
        {
            if (str1[i] == str2[j])
            {
                str2[j] = str2[--size2];
                temp++;                
                break;
            }
            j++;
        }
        i++;
    }
    if ( temp==str1.size())
        cout << "Yes. Two strings are anagram of each other" << endl;
    else
        cout  << "NO. Two strings are not anagram of each other" << endl;
    return 0;
}
