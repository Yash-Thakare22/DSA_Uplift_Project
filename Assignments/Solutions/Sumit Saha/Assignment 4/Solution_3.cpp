/* 
Given two strings, removes the characters from the first string which are present in the second string
I/P :
str1="leetcode" , str2="let"
O/P :
cod    
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "leetcode" , s2 = "let",s3="";
    int l1 = s1.length();
    int l2 = s2.length();
    int k=0;
    for(int i=0;i<l1;i++){
        for(int j=0;j<l2;j++){
            if(s1[i] == s2[j]) s1[i] = '.';            
            }}
            for(int i=0;i<l1;i++){
                if(s1[i] == '.')continue;
                else cout<<s1[i];
            }
    return 0;
}
