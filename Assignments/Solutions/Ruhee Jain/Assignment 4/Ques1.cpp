/*

Question 1

Given two strings str1 and str2, write program to swap two strings

I/P:
str1="C++" , str2="Java"
O/P:
str1="Java" , str2="C++"


*/


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;
    cin>>str1;

    string str2;
    cin>>str2;
    string temp;            
    
    temp = str1;
    str1 = str2;            
    str2 = temp;

    cout<<"str1 after swapping is: "<<str1<<endl;
    cout<<"str2 after swapping is: "<<str2<<endl;
}
