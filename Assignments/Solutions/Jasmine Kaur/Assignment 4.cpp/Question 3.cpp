#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "leetcode" , s2 = "let",s3="";
    int len1 = s1.length();
    int len2 = s2.length();
    int k=0;
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(s1[i] == s2[j]) s1[i] = '.';            
            }}
            for(int i=0;i<len1;i++){
                if(s1[i] == '.')continue;
                else cout<<s1[i];
            }
    return 0;
}
