#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int Arrmax(int a[],int n){
    if(n==1)
    return a[0];
    return max(a[n-1],Arrmax(a,n-1));
}
int Arrmin(int a[],int n){
    if(n==1)
    return a[0];
    return min(a[n-1],Arrmin(a,n-1));
}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<"Max:"<<Arrmax(a,n);
   cout<<"Min:"<<Arrmin(a,n);
   

    return 0;
}
