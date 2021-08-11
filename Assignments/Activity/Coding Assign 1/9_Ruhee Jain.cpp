#include <bits/stdc++.h>
using namespace std;

int printIndex(vector<string> s1, vector <string> s2){
    int m=s1.size();
    int n=s2.size();
    int index = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            
            if(s1[i]==s2[j])
            {
                 index=min(i,j);
                 j++;
            }
            else 
                i++;
        }
        
    }
    return index>0?index+1:-1;
}

int main( )
{
    
	string s1,s2;
    cin>>s1;
    cin>>s2;
    vector<string> v1;
    v1.push_back(s1);
    vector<string> v2;
    v2.push_back(s2);
    cout<< printIndex(v1,v2);
    
    return 0;
}
