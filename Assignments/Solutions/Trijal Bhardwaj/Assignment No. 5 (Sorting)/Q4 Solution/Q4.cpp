/*
Question 4
Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.
Input:
N = 5
S = "edsab"
Output:
abdes
*/

#include <iostream>
using namespace std;
int main() {
    string s;
    int n;
    cout << "Enter the Size of the String : ";
    cin >> n;
    cout << "\nEnter the Elements of the String : ";
    cin >> s;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[j] > s[j + 1])
                swap(s[j], s[j + 1]);
        }
    }
    cout << "\nString After Arranging All Its Letters in Lexicographical Order Using Counting Sort : ";
    for (int i = 0; i < n; i++)
        cout << s[i];
    cout << endl;
    return 0;
}
