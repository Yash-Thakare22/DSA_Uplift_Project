/* Question 3

Given two strings, removes the characters from the first string which are present in the second string

I/P:
str1="leetcode" , str2="let"
O/P:
cod

*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void RemoveCharacters (string str1, string str2) {

    for (int i = 0; i < str1.length() ; i++) {
        for (int j = 0; j < str2.length() ; j++) {
            if (str1[i] == str2[j]) {
                str1[i] = ' ';
            }
        }
    }
    for(int i = 0; i < str1.length(); i++){
        if (str1[i] == ' ')
            continue;
        else
            cout << str1[i];

    }
}

int main() {
    string str1, str2;
    cout << "Enter two string :";
    cin >> str1 >> str2;
    cout << endl;

    cout << " ";
    RemoveCharacters(str1, str2);

    return 0;
}



