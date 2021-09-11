#include<bits/stdc++.h>
#include <iostream>

using namespace std;

void printstarts(int n)
{
    if(n==0)
    return;
    for(int i=0;i<n;i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    printstarts(n-1);
}
int main()
{
   int n;cin>>n;
   printstarts(n);
   return 0;
}
