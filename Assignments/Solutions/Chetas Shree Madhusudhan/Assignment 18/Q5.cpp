// https://www.geeksforgeeks.org/write-a-c-program-to-calculate-powxn/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pow(int n,int x){
    if(x==0) return 1; 
    return n*pow(n,x-1);
}
int main(){
    int n,x;
    cin>>n>>x;
    cout<<pow(n,x);

    return 0;
}