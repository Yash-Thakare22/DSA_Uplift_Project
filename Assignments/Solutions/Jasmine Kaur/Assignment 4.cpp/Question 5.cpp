#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1  = "triangle" ,s2 = "integral";
    int len1 = s1.length();
    int len2 = s2.length();
    int c=0,i;
    if(len1 != len2) cout<<"No. Two strings are not anagram of each other";
    else{
        for(i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                if(s1[i] == s2[j]){
                    c++;
                    break;
                }
            }
        }cout<< ((c == len1)? "Yes,Two strings are anagram of each other":"No,Two strings are not anagram of each other");
    }
    return 0;
}
