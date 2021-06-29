/*
Question 4
Given a string str, write program reverse words in a given string
I/P :
Do problem solving
O/P:
solving problem Do
*/

#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string str, str1;
    int i, c = 0;
    cout<<"Enter the String : ";
    getline(cin, str);
    int n = str.length();
    string str2[n];
    for (i = 0; i <= n; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            str1 += str[i];
        } else {
            str2[c] = str1;
            str1 = ' ';
            c++;
        }
    }
    cout << "\nString After Reversing Its Words : ";
    for (i = c - 1; i >= 0; i--)
        cout << str2[i] << " ";
    cout << endl;
    return 0;
}
