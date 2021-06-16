#include<iostream>
#include<string.h>
using namespace std;
int main()       //program to swap two strings
{
 
    char str1[30],str2[30],temp[30];
    cout<<"String 1: ";
    cin>>str1;
    cout<<"String 2: ";
    cin>>str2;
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
      cout<<"String 1: "<<str1;
    cout<<endl<<"String 2: "<<str2;
return 0;
}
