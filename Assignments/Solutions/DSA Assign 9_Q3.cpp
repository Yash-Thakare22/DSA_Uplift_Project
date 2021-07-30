#include <bits/stdc++.h> 
using namespace std; 
     string restoreString(string s, vector<int>& indices) {
        string res = s;
        for(int i =0; i < indices.size(); ++i)
            res[indices[i]] = s[i];
        return res;
    }
int main() 
{ 
 string s="art";      
 vector<int> arr = { 1,0,2 }; 
 cout<<restoreString(s,arr)<<endl; 
 return 0;
}