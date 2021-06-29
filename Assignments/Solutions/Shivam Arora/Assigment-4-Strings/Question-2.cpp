/*
Question 2

Given a string str, the task is to remove all the duplicates in the given string

I/P:
aababcdd

O/P:
abcd
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
//input:
string s;
cin>>s;

//remove duplicates:
string result="";             //result string
sort(s.begin(),s.end());      //sort original string.
int len=s.size();
for(int i=0;i<len;i++){      //iterate over s & if 2 consecutive char doesnt match , store in result.
        if(s[i]!=s[i+1]){
            result+=s[i];
        }
}

//output:
cout<<result;

return 0;
}
