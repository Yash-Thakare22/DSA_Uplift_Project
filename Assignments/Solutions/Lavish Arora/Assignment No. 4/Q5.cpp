#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string str1, str2;
    cout<<"Enter First String :";
    cin >> str1;
    cout<<"Enter Second String :";
    cin >> str2;

    int n = str1.length();
    int m = str2.length();

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());


    if (str1 == str2)
        cout << "Yes. Two strings are anagram of each other ";
    else
        cout << "No. Two strings are not anagram of each other";
    return 0;
}