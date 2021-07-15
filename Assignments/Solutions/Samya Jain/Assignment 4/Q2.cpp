/* Question 2

Given a string str, the task is to remove all the duplicates in the given string

I/P:
aababcdd
O/P:
abcd
*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

string removeDuplicates (string str1, int n) {
    string ans;
    sort(str1.begin(), str1.end());

    for (int i = 0; i < n; i++) {
        if (str1[i + 1] != str1[i]) {
            ans = ans + str1[i];
        }
    }
    return ans;

}

int main() {
    string str1;
    cout << "Enter a string :";
    cin >> str1;
    cout << endl;
    int n = str1.size();

    cout << removeDuplicates(str1, n);

    return 0;
}

