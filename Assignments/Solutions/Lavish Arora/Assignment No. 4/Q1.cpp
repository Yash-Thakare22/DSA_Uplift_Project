#include <iostream>

using namespace std;

int main()
{
    string s1, s2, temp;
    cout<<"Enter String 1 :";
    getline(cin, s1);
    cout<<"Enter String 2 :";
    getline(cin, s2);
    temp = s1;
    s1 = s2;
    s2 = temp;
    cout << "String 1 : " << s1 << endl;
    cout << "String 2 : " << s2;

    return 0;
}