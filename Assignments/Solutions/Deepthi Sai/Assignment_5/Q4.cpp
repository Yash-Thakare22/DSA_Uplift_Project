#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define N 26
void lexisort(char*s,int n)
{
 int c[N]={0};
 for (int i=0; i<n; i++)
    {
    c[s[i]-'a']++;   
    }
     
    for (int i=0;i<N;i++)
        for (int j=0;j<c[i];j++)
            cout << (char)('a'+i);
            
    
}

int main()
{
int n;
cin>>n;
char s[n];
for(int i=0;i<n;i++)
{
cin>>s[i];
}
lexisort(s,n);
return 0;
}

//time complexity=O(n) space complexity=O(n)
