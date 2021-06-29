#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++)
    {
      for(int j=0;j<i;j++)
      {
         if(s[j]==s[i])
         s.erase(i,1);
      }
    }
    
    cout<<s<<endl;
    return 0;
}
