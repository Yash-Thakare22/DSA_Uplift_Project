#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string t;
    t= (s1.size()<s2.size())?s2:s1;
    int n= min(s1.size(),s2.size());
    
    for(int i=0;i<n;i++)
    {
        int t= s1[i];
        s1[i]=s2[i];
        s2[i]=t;
    }
    
    
    if(s1.size()<s2.size()){
    s1=s1+t.substr(n,t.size()-1);
    s2=s2.erase(n,t.size()-1);
    }
    
    else {s2=s2+t.substr(n,t.size()-1);
    s1=s1.erase(n,t.size()-1);
    }
    cout<<"str1 = "<<s1<<","<<"str2 ="<<s2;
    
    return 0;
}
