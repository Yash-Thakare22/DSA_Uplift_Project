/*  Given a string str, the task is to remove all the duplicates in the given string

I/P :
aababcdd

O/P :
abcd  */

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	int i;
	sort(s.begin(),s.end());
	int n = s.length();
	for(i=0;i<n;i++)
		if (s[i+1] != s[i])
			cout <<(s[i]);
	return 0;
}
