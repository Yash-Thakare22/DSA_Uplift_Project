/* Question 1
Given two strings str1 and str2, write program to swap two strings
I/P :
str1="C++" , str2="Java"
O/P :
str1="Java" , str2="C++"  */

#include <iostream>

using namespace std;

int main()
{
    string str1, str2, temp;
    getline(cin, str1);
    getline(cin, str2);
    temp = str1;
    str1 = str2;
    str2 = temp;
    cout << "Str 1 : " << str1 << endl;
    cout << "Str 2 : " << str2;

    return 0;
}