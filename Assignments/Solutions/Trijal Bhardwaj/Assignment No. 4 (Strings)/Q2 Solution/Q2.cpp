/*
Question 2
Given a string str, the task is to remove all the duplicates in the given string
I/P :
aababcdd
O/P :
abcd
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cout << "Enter the String : ";
    getline(cin, s);
    sort(s.begin(), s.end());
    cout << "\nString After Removing All Duplicates In It : ";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != s[i + 1])
            cout << s[i];
    }
    cout << endl;
    return 0;
}
