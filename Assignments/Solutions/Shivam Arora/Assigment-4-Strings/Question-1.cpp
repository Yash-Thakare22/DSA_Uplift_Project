/*
Question 1

Given two strings str1 and str2, write program to swap two strings

I/P:
str1="C++" , str2="Java"
O/P:
str1="Java" , str2="C++"
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
//strings:
string str1="C++";
string str2="Java";

//intially:
cout<<"str1:"<<str1<<endl;
cout<<"str2:"<<str2<<endl;

//swapping:
string tmp="";
tmp=str1;
str1=str2;
str2=tmp;

//output:
cout<<"str1:"<<str1<<endl;
cout<<"str2:"<<str2;
return 0;
}

