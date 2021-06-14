#include <iostream>
#include<bits/stdc++.h>

using namespace std;
string reversestring(string s)
    {
        for(int i=0;i<(s.size()/2);i++)
        {
          int t=s[i];
          s[i]=s[s.size()-i-1];
          s[s.size()-1-i]=t;
        }
        return s;
    }

int main()
{
    string s;
    getline(cin,s);
    string s1=reversestring(s);
    int j=0,start,end;
    for(int i=0;i<=s1.size();i++)
        {
                 if(s1[i]==' ' || s1[i]=='\0')
                {
                         for(start= j,end=i-1 ; start<(i+j)/2 ; start++,end--)
                         {
                                   int temp=s1[start];
                                   s1[start]=s1[end];
                                   s1[end]=temp;
                         }
                         j=i+1;
                }
         }
    

    cout<<s1;
    return 0;
}
