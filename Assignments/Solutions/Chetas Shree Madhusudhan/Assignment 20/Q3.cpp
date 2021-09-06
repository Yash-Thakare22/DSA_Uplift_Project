// https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int pow(int n,int x){
    if(x==0) return 1;
    return n*pow(n,x-1);
}
int modexp(int n,int x,int p){
    return pow(n,x)%p;
}
int main(){
    int n,x,p;
    cin>>n>>x>>p;
    cout<<modexp(n,x,p);
    return 0;
}