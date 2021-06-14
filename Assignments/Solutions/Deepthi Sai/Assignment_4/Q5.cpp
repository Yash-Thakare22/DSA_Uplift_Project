#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define n 256
 
bool Anagram(string s1, string s2)
{
    int count[n] = { 0 };
    int i;
    
    for (i = 0; s1[i] && s2[i]; i++) 
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
 
    if (s1[i] || s2[i])
        return false;
 
    for (i = 0; i < n; i++)
        if (count[i])
            return false;
    return true;
}
 
int main()
{
   string s1,s2;
    getline(cin,s1);
   getline(cin,s2);
    if(Anagram(s1, s2)==true)
    cout << "Yes. Two strings are anagram of each other";
    else
    cout << "No. Two strings are not anagram of each other";
    return 0;
}
