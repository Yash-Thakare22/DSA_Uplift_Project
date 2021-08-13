#include <iostream>
using namespace std;

int main()
{
    string str1, str2, temp;
    cout << "Enter string1";
    cin >> str1;
    cout << "Enter string2";
    cin >> str2;

    int n=str2.length(),j=0,i=0;
    int size=str1.length();
   // string s; 
    while(i<=size)
    {
        if (j > n)
        {
            cout << str1[i];
            j = 0;
            i++;
        }

        else if(str1[i]!=str2[j])
        {
            j++;
        }

        else if (str1[i] == str2[j])
        {
            j=0;
            i++;
        }
    }
 //   cout<<s;
    return 0;
}
