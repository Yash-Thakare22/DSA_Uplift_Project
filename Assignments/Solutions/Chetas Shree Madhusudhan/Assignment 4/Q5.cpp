// Question 5

// Given two strings, write program to check whether two given strings are anagram of each other or not
// An anagram of a string is another string that contains the same characters, only the order of characters can be different

// I/P:
// str1="triangle" , str2="integral"
// O/P:
// Yes. Two strings are anagram of each other

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1  = "triangle" ,s2 = "integral";
    int l1 = s1.length();
    int l2 = s2.length();
    int c=0,i;
    if(l1 != l2) cout<<"No. Two strings are not anagram of each other";
    else{
        for(i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(s1[i] == s2[j]){
                    c++;
                    break;
                }
            }
        }cout<< ((c == l1)? "Yes. Two strings are anagram of each other":"No. Two strings are not anagram of each other");
    }
    return 0;
}