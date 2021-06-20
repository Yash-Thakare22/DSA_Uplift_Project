#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
      for(int j=0;j<s2.size();j++)
      {
         if(s1[i]==s2[j])
         {
         s1.erase(s1.begin() + i);
         i--;
         }
      }
    }
    
    cout<<s1<<endl;
    return 0;
}
