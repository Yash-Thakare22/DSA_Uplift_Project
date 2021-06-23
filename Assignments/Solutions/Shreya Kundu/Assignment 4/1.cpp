/*
Question 1

Given two strings str1 and str2, write program to swap two strings

I/P:
str1="C++" , str2="Java"
O/P:
str1="Java" , str2="C++"
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1="Helluu";
	string s2="Hi";
	string s=s1;
	s1=s2;
	s2=s;
	cout<<s1<<"\n";
	cout<<s2<<"\n";
	return 0;
}
