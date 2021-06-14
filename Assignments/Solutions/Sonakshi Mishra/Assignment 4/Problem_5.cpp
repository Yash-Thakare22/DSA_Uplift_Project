#include <iostream>
#include<algorithm>
using namespace std;//Program to check for anagram
int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int l1 = str1.length();
    int l2= str2.length();
    
    sort(str1.begin(), str1.end());
    
    sort(str2.begin(), str2.end());
    if (str1 == str2)
        cout << "Yes. Two strings are anagram of each other!";
    else
        cout << "No. Two strings are not anagram of each other!";
    return 0;
}