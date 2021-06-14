#include <bits/stdc++.h>
#include <cstring>
using namespace std;

bool anagram_check(char str1[], char str2[]) {
    bool flag = false;
    if(strlen(str1) == strlen(str2)) 
    {
        for(int i = 0; i < strlen(str1); i++){
            flag = false;
            for(int j = 0; j < strlen(str1); j++) {
                if(str1[i] == str2[j]) {
                    flag = true;
                    break;
                }
            }
            if(flag == false)
                break;
        }
    }
    return flag;
}

int main()
{
    char str1[100], str2[100];
    cin >> str1 >> str2;
    
    if(anagram_check(str1, str2))
        cout << "Yes. Two strings are anagram of each other" << endl;
    else
        cout << "No. The strings are not anagrams of each other" << endl;
    
    return 0;
}