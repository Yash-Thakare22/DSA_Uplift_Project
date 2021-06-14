#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    char str1[100];
    cin.get(str1, 100);
    char words[100][100];
    
    int w_index = 0, w_char = 0;
    for(int i = 0; i < strlen(str1); i++) {
        if(str1[i] != ' ') {
            words[w_index][w_char] = str1[i];
            w_char++;
        }
        else {
            w_index++;
            w_char = 0;
        }
    }
    
    for(int i = w_index; i >= 0; i--)
        cout << words[i] << " ";
    
    return 0;
}
