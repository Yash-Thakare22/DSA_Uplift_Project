/* Question 1

Given two strings str1 and str2, write program to swap two strings

I/P:
str1="C++" , str2="Java"
O/P:
str1="Java" , str2="C++"

*/

#include <iostream>

using namespace std;

void SwapStrings (string str1,string str2) {
    string t = str1;
    str1 = str2;
    str2 = t;
    cout << str1 << " " << str2;
}

int main() {
    string str1, str2;
    cout << "Enter two strings :";
    cin >> str1 >> str2;
    cout << endl;

    SwapStrings(str1, str2);

    return 0;
}
