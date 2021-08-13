// Question Link: https://www.geeksforgeeks.org/longest-common-prefix-using-divide-and-conquer-algorithm/

include <iostream>
#include <bits/stdc++.h>
using namespace std;

string commonPrefix(string str1,string str2){
    int s1 = str1.length(),s2 = str2.length();
    string ans="";
    for(int i=0,j=0; i<s1,j<s2;i++,j++){
        if(str1[i] != str2[j]) break;
        ans+=str1[i];
    }return ans;
}
int main(){
    string arr[] = {"geeksforgeeks", "geeks",
                    "geek", "geezer"};
    int n = sizeof (arr) / sizeof (arr[0]);
    string ans1 = commonPrefix(arr[0],arr[1]);
    string ans2 = commonPrefix(arr[1],arr[2]);
    string ans3 = commonPrefix(ans1,ans2);
    cout << "The longest common prefix is "<< ans3;

    return 0;
}
