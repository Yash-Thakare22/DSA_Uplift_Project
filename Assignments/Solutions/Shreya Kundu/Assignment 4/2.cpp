/*
Question 2

Given a string str, the task is to remove all the duplicates in the given string

I/P:
aababcdd
O/P:
abcd
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int index=0;
    int n=str.length();
	for(int i=0;i<n;i++)
	   {	
	     int j; 
     for (j=0; j<i; j++)
        if (str[i] == str[j])
           break;
     if (j == i)
		str[index++] = str[i];
		}
	str[index]='\0';
	str=str.substr(0,index+1);	
	cout<<str;
	return 0;
}
