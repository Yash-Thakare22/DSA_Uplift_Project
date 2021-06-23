#include<iostream>
using namespace std;
int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(s1[i]==s2[j]){
                s1.erase(s1.begin()+i);
            }
        }
    }
    cout<<s1;
    return 0;
}
