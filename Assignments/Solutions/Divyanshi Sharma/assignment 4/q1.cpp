#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cout << "enter string 1:";
    getline(cin, s1);
    cout << "enter string 2:";
    getline(cin, s2);
    string temp;
    temp = s1;
    s1= s2;
    s2= temp;
    cout << "string 1 :"<< s1<< endl;
    cout << "string 2 :"<< s2;
    return 0;
}
