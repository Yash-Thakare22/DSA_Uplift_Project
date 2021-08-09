// https://www.geeksforgeeks.org/square-root-of-an-integer/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int floorSqt(int x){
    if(x==0 || x==1) return x;
    int i=1,result=1;
    while(result<=x){
        i++;
        result=i*i;
    }return i-1;
}
int main(){
    int n;
    cin>>n;
    cout<<floorSqt(n);
    return 0;
}