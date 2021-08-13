#include <iostream>
using namespace std;

int main()
{
    string s, str;
    int flag;
    cout << "Enter string1";
    getline(cin, s);
    cout<<"Enter string2";
    getline(cin,str);
    for(int i=0;i<s.size();i++)
    {
        flag=1;
        for(int j=0;j<str.size();j++)
        {
            if(s[i]==str[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout << " No. Strings are not anagram of each other.";
            break;
        }
    }

    if(flag==0)
        cout<<"Yes. Strings are anagram of each other";

            
                return 0;
}
