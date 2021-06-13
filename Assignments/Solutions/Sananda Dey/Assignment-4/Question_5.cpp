#include <bits/stdc++.h>
using namespace std;

int main() {
   string str1,str2;
   cin>>str1>>str2;
   sort(str1.begin(),str1.end());
   sort(str2.begin(),str2.end());
   if(str1==str2){
       cout<<"Yes. Two strings are anagram of each other";
   }else{
       cout<<"NO.Two strings are not anagram of each other";
   }
	return 0;
}