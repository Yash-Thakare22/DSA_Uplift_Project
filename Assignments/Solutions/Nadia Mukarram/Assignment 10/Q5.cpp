#include <iostream>
#include<bits/stdc++.h>

using namespace std;
bool IsPrime(int n,int i=2){
    if(n<=2){
        n==2?true:false;
    }
    if(n%i==0){
        return false;
    }
    if(i*i>n)
    return true;
    
    return IsPrime(n,i+1);
}

int main()
{
   int n;
   cin>>n;
   if(IsPrime(n))
   cout<<"Yes";
   else
   cout<<"No";
    return 0;
}
