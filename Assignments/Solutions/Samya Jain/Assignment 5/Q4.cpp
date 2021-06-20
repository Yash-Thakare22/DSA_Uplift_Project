/* Question 4: Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.

Input:
N = 5
S = "edsab"
Output:
abdes

*/

#include <iostream>

using namespace std;

void lexicographic(string str)
{

    int count1[26] = {0};

    for (int i=0; i < str.length(); i++)

        count1[str[i]-'a']++;

    for (int i = 0; i < 26; i++)

        for (int j = 0; j < count1[i]; j++)

            cout << (char)('a'+i);
}



int main()
{

    string str;
    cout << "Enter any string :";
    cin >> str;

    lexicographic(str);

    return 0;
}
