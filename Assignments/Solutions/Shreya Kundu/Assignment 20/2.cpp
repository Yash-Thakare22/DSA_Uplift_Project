#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
  if(a==0)
    return b;
  return gcd(b%a,a);
}
int main(){
  int n;
  cin>>n;
  int s=1;
  for(int i=2;i<n;i++){
    if(gcd(i,n)==1)
      s++;
  }
  return s;
}
