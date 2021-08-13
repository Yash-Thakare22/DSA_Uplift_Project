/*  
Given two strings, write program to check whether two given strings are anagram of each other or not.
An anagram of a string is another string that contains the same characters, only the order of characters can be different
I/P :
str1="triangle" , str2="integral"
O/P :
Yes. Two strings are anagram of each other  
*/ 

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	string  str1,str2;
	cin >> str1;
	cin >> str2;
	
	int n = str1.length();
	int m = str2.length();
	
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	
	if(str1 == str2)
		cout << "Yes. Two strings are anagram of each other " ;
	else
		cout << "No. Two strings are not anagram of each other" ;
	
	return 0;
}
