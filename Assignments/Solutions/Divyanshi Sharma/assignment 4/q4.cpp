#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    cout<< "s2:";
    getline(cin,s2);
    int count[256]={0};
    int i;
    for (i = 0; s1[i] && s2[i]; i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    if (s1[i] || s2[i])
        cout<<"no";
     for (i = 0; i < 256; i++)
        {if (count[i])
           {
             cout<< "no";
            break;
           }
        if (!count[i])
        {
            cout<<"yes";
            break;
        }
}
    return 0;
}
