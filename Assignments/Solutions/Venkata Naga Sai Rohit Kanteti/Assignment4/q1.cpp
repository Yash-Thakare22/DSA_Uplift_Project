/* 
Question 1

Given two strings str1 and str2, write program to swap two strings

I/P:
str1="C++" , str2="Java"
O/P:
str1="Java" , str2="C++" */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<"Before swapping"<<endl;
    cout<<"s1   "<<s1<<endl;
    cout<<"s2   "<<s2<<endl;
    string temp;
    temp =s1;
    s1=s2;
    s2=temp;
    cout<<"After  swapping"<<endl;
    cout<<"s1   "<<s1<<endl;
    cout<<"s2   "<<s2<<endl;
}
