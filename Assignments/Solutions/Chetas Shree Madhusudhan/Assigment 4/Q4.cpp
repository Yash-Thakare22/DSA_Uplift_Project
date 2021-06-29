// Question 4

// Given a string str, write program reverse words in a given string

// I/P:
// Do problem solving
// O/P:
// solving problem Do

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector <string> v;
    string s="Do problem solving"; 
    int l = s.length();
    string r="";
    for(int i=0;i <l;i++){
        if (s[i] == ' ') {
            v.push_back(r);
            r="";
        }
        else r+=s[i];
    }v.push_back(r);
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}