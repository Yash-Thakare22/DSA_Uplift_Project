#include <iostream>
#include<string>
using namespace std;
int main() {
    string s1;
    getline(cin,s1);
    for(int i=0;i<s1.size();i++){
        for(int j=i+1;j<s1.size();j++){
            if(s1[i]==s1[j]){
                s1.erase(s1.begin()+j);
        }
    }
    
    }
    cout<<s1<<"\n";
    
    
    return 0;
}
