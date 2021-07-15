/*

Question 5

Given two strings, write program to check whether two given strings are anagram of each other or not
An anagram of a string is another string that contains the same characters, only the order of characters can be different

I/P:
str1="triangle" , str2="integral"
O/P:
Yes. Two strings are anagram of each other

*/

#include <iostream>
#include<algorithm>
using namespace std;
 

bool areAnagram(string str1, string str2)
{
    
    int n1 = str1.length();
    int n2 = str2.length();
 
    if (n1 != n2)
        return false;
 
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
 
    return true;
}
 

int main()
{
   string str1, str2;
    cout<<"Enter First String :";
    cin >> str1;
    cout<<"Enter Second String :";
    cin >> str2;
    if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each other";
 
    return 0;
}


