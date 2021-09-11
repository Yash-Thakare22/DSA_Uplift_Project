// Question 2

// Given a string str, the task is to remove all the duplicates in the given string

// I/P:
// aababcdd
// O/P:
// abcd
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "aababcdd";
    int l = a.size();
    sort(a.begin(),a.end());
    for(int i=0;i<l;i++){
        if (a[i+1] != a[i]) cout<<a[i];
    }
    return 0;
}