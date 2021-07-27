#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c1[1000], c2[1000];
    cin >> c1 >> c2; //taking input string from console
    int len1, len2;
    len1 = strlen(c2); //length of 1st string
    len2 = strlen(c2); //length of 2nd string
    int i = 0, j = 0, index;
    if (len1 < len2) //if len1 <len2 then c2 is not contained in c1
    {
        cout << -1;
        return 0;
    }
    while (j < len2)
    {
        if (c1[i] == c2[j]) //chechking for first character of c2 in c1 where it starts
            break;
        i++;
    }
    if (i == len1) // first character of c2 is not found in c1 then print -1
    {
        cout << -1;
        return 0;
    }
    index = i + 1;
    while (j < len2)
    {
        if (c1[i++] != c2[j++]) //if characters are not in place or not present print -1
        {
            cout << -1;
            return 0;
        }
    }
    cout << index; // if all the characters are present and are in sequence
                   // print the index (starts from 1)
    return 0;
}
