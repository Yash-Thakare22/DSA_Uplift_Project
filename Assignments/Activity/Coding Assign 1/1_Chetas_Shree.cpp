#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check(string c1,string c2){
    int s1 = c1.length();
    int s2 = c2.length();
    int j;
    if(s1<s2) return -1;
    for(int i=0;i<s1;i++){
        if(c1[i] == c2[0]){
            for(j=0;j<s2;j++){
                if(c1[i+j] != c2[j]) break;
            } if(j==s2) return i+1;
        }
    }return -1;
}
int main(){
    string c1,c2;
    cin>>c1>>c2;
    cout<<check(c1,c2);
    return 0;
}

// Test Case 1:
// I/P: #fgsh%%7! gsh%
// O/P: 3

// Test Case 2:
// I/P: #fgsh%%7! #gsh%
// O/P: -1

// TC : O(N^2)
// SC : O(1)