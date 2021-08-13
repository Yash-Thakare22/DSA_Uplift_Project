/*
Question 4: Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.

Input:
N = 5
S = "edsab"
Output:
abdes
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(s[i]>s[j])
            swap(s[i],s[j]);
        }
    }
    for(int i=0;i<n;i++) 
    	cout<<s[i];

    return 0;
}
