#include <iostream>

using namespace std;

int main()
{
    string str1,str2,temp;
    cout<<"Enter string1";
    cin>>str1;
    cout<<"Enter string2";
    cin>>str2;
    temp=str1;
    str1=str2;
    str2=temp;
    cout<<"String1 is "<<str1<<endl;
    cout << "String2 is " << str2;

    return 0;
}
