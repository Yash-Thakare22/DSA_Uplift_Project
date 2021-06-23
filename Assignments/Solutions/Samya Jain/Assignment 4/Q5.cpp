/* Question 5.
Given two strings, write program to check whether two given strings are anagram of each other or not
An anagram of a string is another string that contains the same characters, only the order of characters can be different

I/P:
str1="triangle" , str2="integral"
O/P:
Yes. Two strings are anagram of each other
*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

bool IsAnagram (string str1, string str2) {

    if (str1.length() != str2.length())
        return false;

    else {

        for (int i = 0; i < str1.length(); i++) {

            int x = str1[i];
            int c1 = 0, c2 = 0;

            for (int j = 0; j < str1.length(); j++) {
                if (x == str1[j])
                    c1++;
            }

            for (int j = 0; j < str2.length(); j++) {
                if (x == str2[j])
                    c2++;
            }

            if(c1 != c2)
                return false;

        }
        return true;

    }

}

int main() {
    string str1, str2;
    cout << "Enter two string :";
    cin >> str1 >> str2;
    cout << endl;

    if (IsAnagram(str1, str2))
        cout << "Yes. Two strings are anagram of each other." << endl;

    else
        cout << "No. Two strings are not anagram of each other." << endl;

    return 0;
}
